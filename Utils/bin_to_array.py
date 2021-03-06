import os, sys, shutil, getopt
from intelhex import IntelHex

header = """#ifndef FIRMWARE_H
#define FIRMWARE_H
#include <stdint.h>\n\n"""

footer = """
};
#endif // FIRMWARE_H

"""

def usage():
    print("""Usage: %s [-h] [-i input] [-o 0x8030000] [--bin]
    -h          This help
    -i          Path to .hex dir
    -o          Firmware offset (example: 0x8030000)
    -b/--bin    Save the binary file (app.bin)
    """ % sys.argv[0])

def find_hex_path(path):
    try:
        files = os.listdir(path)
    except:
        print('[ERROR] : Hex path does not have a directory')
    # Find path to HEX file
    hex_path = ''
    for file in files:
        if '.hex' in file:
            hex_path = path + '\\' + file
    return hex_path

def create_array(bin_file, name_out, offset = ''):
    # check offset
    if (offset == '' ):
        print('[ERROR] : offset is EMPTY')
        if os.path.isfile(bin_file):
            os.remove(bin_file)
        raise SystemExit(0)
        
    # Create byte array
    bin_data = b''
    try:
        with open(bin_file, 'rb') as f:
            bin_data = f.read()
    except:
        print('[ERROR] :' + bin_file + '-- Not found')
        raise SystemExit(0)
    array = bytearray(bin_data)
    array_len = str(len(array))
    print('[INFO]: Created array size: ' + array_len + ' Bytes')
    
    # Create .h
    with open(name_out + '.h', 'w') as f:
        char_in_line = 16
        
        f.write(header)
        f.write('#define FIRMWARE_ADDR ' + offset + '\n')
        f.write('#define FIRMWARE_SIZE (' + array_len + ')\n\n')

        f.write('static const uint8_t firm_array[FIRMWARE_SIZE] __attribute__((section (".ARM.__at_' + offset + '\"))) = {\n')
        
        for i, byte in enumerate(array):
            f.write(hex(byte))
            if i != (len(array) - 1):
                f.write(', ')
                
            if i != 0:
                if (i % char_in_line) == 0:
                    f.write('\n') 
        
        f.write(footer)

def get_last_line(f, offset):
    f.seek(-1024, os.SEEK_END)
    return f.readlines()[offset].decode()


def main():
    # Default param
    hex_path = "D:\Projects\Keil Project\WS_test_boot\MDK-ARM\WS_test_task"
    input_hex = ''
    firmware_addr = '0x8030000'
    c_file_name = 'firmware'
    bin_file = 'app.bin'
    bin_out = False
    
    try:
        opts, args = getopt.getopt(sys.argv[1:], 'hi:o:b', ["input=", "offset=", "bin"])
    except getopt.GetoptError as err:
        usage() # print help information and exit:
        SystemExit(2)
    for o, a in opts:
        if o in ('-h'):
            usage()
            return
        elif o in ("-i", "--input"):
            hex_path = a
        elif o in ("-o", "--offset"):
            firmware_addr = a
        elif o in ("-b", "--bin"):
            bin_out = True
        else:
            return print("Undefined param" + o)
            
    # Copy hex
    hex_path = find_hex_path(hex_path)

    try:
        shutil.copy(hex_path, os.getcwd())
    except:
        print('[ERROR] : .hex path is EMPTY')
        raise SystemExit(0)
        
    input_hex = hex_path.split('\\')[-1]
    
    with open(input_hex, 'rb+') as f:
        last = get_last_line(f, -1)
        prelast = get_last_line(f, -2)
        if ':040000' in prelast: # delete expanded addres
            pos = f.tell() - len(last) - len(prelast)
            f.seek(pos, os.SEEK_SET)
            f.truncate()
            f.write(bytes(last, "utf8"))
    
    # Create bin
    ih = IntelHex(input_hex)
    ih.tobinfile(bin_file)
    
    if os.path.isfile(c_file_name + '.h'):
        os.remove(c_file_name + '.h')

    print('[INFO]: Input HEX: ' + input_hex)
    print('[INFO]: Input bin: ' + bin_file)
    print('[INFO]: Firmware addr: ' + firmware_addr)
       
    create_array(bin_file, c_file_name, offset = firmware_addr)
    print('[INFO]: ' + c_file_name + '.h' + ' -- Created successful')
    
    if not bin_out:
        os.remove(bin_file)
    
    os.remove(input_hex)
    
if __name__ == '__main__':
    main()

