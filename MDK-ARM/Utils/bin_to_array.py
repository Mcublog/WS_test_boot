import os, sys, shutil
import subprocess


def create_array(bin_file, name_out, offset = ''):
    # check offset
    if (offset == '' ):
        print('[ERROR] : offset is EMPTY')
        raise SystemExit
    # Create byte arry
    try:
        f = open(bin_file, 'rb')
    except:
        print('[ERROR] :' + bin_file + '-- Not found')
    array = bytearray(f.read())
    array_len = str(len(array))
    print('[INFO]: Array created: len == ' + array_len)
    # Create .h
    f = open(name_out + '.h', 'w')
    f.write('#ifndef FIRMWARE_H\n')
    f.write('#define FIRMWARE_H\n\n')
    f.write('#include <stdint.h>\n\n')

    f.write('#define FIRMWARE_SIZE (' + array_len + ')\n\n')

    sym_in_str = 32

    f.write('static const uint8_t firm_array[FIRMWARE_SIZE] __attribute__((section (".ARM.__at_' + offset + '\"))) = {\n')
    for (i, byte) in enumerate(array):
        f.write(str(byte))
        if i != (len(array) - 1):
            f.write(', ')
        if (i % sym_in_str) == 0 and (i > sym_in_str):
            f.write('\n')
    f.write('};\r\n')
    f.write('#endif // FIRMWARE_H\n')
    print('[INFO]: ' + name_out + '.h' + ' created')

input_hex = 'WS_test_task.hex'
offset = 0x8030000
c_file_name = 'firmware'
bin_file = 'WS_test_task.bin'

converter_path: str = os.getcwd() + '\\srec_cat.exe'
    
print('[INFO]: Path ot hexconv: ' + converter_path)
args = [converter_path + ' ' + input_hex]
args += [' -Intel -offset -' + hex(offset)]
args += [' -o ' + bin_file + ' -Binary']
print('[INFO]: Run: ' + str(args))
subprocess.call([args])

create_array(bin_file, c_file_name, offset = hex(offset))

