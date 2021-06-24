#!/usr/bin/python3
''' Python Module '''


def validUTF8(data):
    '''
    determines if a given data set represents a valid UTF-8 encoding.
    @data: a list of intregers
    Return: True if data is a valid UTF-8 encoding, else return False
    '''

    index = 0

    for num in data:
        byte = format(num, '#010b')[-8:]
        if index == 0:
            for b in byte:
                if b == '0':
                    break
                index += 1
            if index == 0:
                continue
            if index == 1 or index > 4:
                return False
        else:
            if not (byte[0] == '1' and byte[1] == '0'):
                return False
        index -= 1

    return index == 0

