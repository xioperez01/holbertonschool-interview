#!/usr/bin/python3
'''
Python Module
'''


def validUTF8(data):
    '''
    determines if a given data set represents a valid UTF-8 encoding.
    @data: a list of intregers
    Return: True if data is a valid UTF-8 encoding, else return False
    '''

    i = 0
    while i < len(data):
        n = data[i] & (2 ** 7)
        n >>= (7)
        # single byte char
        if n == 0:
            i += 1
            continue

        # validate multi-byte char
        if n >> 5 == 0b110 and i < len(data) - 1:
            if data[i + 1] >> 6 == 2:
                i += 2
                continue
        if n >> 4 == 0b1110 and i < len(data) - 2:
            if data[i + 1] >> 6 == data[i + 2] >> 6 == 2:
                i += 3
                continue
        if n >> 3 == 0b11110 and i < len(data) - 3:
            if data[i + 1] >> 6 == data[i + 2] >> 6 == data[i + 3] >> 6 == 2:
                i += 4
                continue
        return False
    return True
