import os, sys, shutil
import subprocess


header = """#ifndef FIRMWARE_H
#define FIRMWARE_H
#include <stdint.h>\n\n"""

footer = """
};
#endif // FIRMWARE_H'

"""

def get_firmware_hex(current_path):
    current_path = current_path.split('\\')
    
    # Get path to ../
    path = ''
    for str in current_path:
        if (str == 'Utils'):
            break
        path += str + '\\'
    files = os.listdir(path)
    
    # Find path to HEX file
    hex_path = ''
    for file in files:
        if os.path.isdir(path + '\\' + file):
            contents = os.listdir(path + '\\' + file)
            for data in contents:
                if '.hex' in data:
                    hex_path = path + '\\' + file + '\\' + data
                    break
    # print(hex)
    return hex_path


    
def create_array(bin_file, name_out, offset = ''):
    # check offset
    if (offset == '' ):
        print('[ERROR] : offset is EMPTY')
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

def main():
    hex_path = get_firmware_hex(os.getcwd())
    shutil.copy(hex_path, os.getcwd())
    # Default param
    input_hex = hex_path.split('\\')[-1]
    if '.hex' not in input_hex:
        print('[ERROR]: Intput HEX not found')
        raise SystemExit(0)
    firmware_addr = 0x8030000
    
    c_file_name = 'firmware'
    bin_file = 'app.bin'
    
    print('[INFO]: Input HEX: ' + input_hex)
    print('[INFO]: Firmware addr: ' + hex(firmware_addr))
    
    # Create args
    converter = os.getcwd() + '\\srec_cat.exe'
    print('[INFO]: Path ot hexconv: ' + converter)
    args = [converter + ' ' + input_hex]
    args += [' -Intel -offset -' + hex(firmware_addr)]
    args += [' -o ' + bin_file + ' -Binary']
    
    print('[INFO]: Run arg: ' + str(args))
    
    # Create .bin file with srec_cat.exe
    subprocess.call([args])

    create_array(bin_file, c_file_name, offset = hex(firmware_addr))
    print('[INFO]: ' + c_file_name + '.h' + ' -- Created successful')

if __name__ == '__main__':
    main()

