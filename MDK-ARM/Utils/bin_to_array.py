import os, sys, shutil


out_file_name = 'firmware'
in_file = 'WS_test_task.bin'

# Create byte arry
f = open(in_file, 'rb')
array = bytearray(f.read())
array_len = str(len(array))

# Create .h
f = open(out_file_name + '.h', 'w')
f.write('#ifndef FIRMWARE_H\n')
f.write('#define FIRMWARE_H\n\n')
f.write('#include <stdint.h>\n\n')

f.write('#define FIRMWARE_SIZE (' + array_len + ')\n\n')

# Byte in string
sym_in_str = 32

f.write('static const uint8_t firm_array[' + array_len + '] __attribute__((section (".ARM.__at_0x08004000"))) = {')
for (i, byte) in enumerate(array):
    f.write(str(byte))
    if i != (len(array) - 1):
        f.write(', ')
    if (i % sym_in_str) == 0 and (i > sym_in_str):
        f.write('\n')
f.write('};\r\n')

f.write('#endif // FIRMWARE_H')