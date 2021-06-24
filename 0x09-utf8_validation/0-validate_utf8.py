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

    index = 0
    while index < len(data):
        number = data[index] & (2 ** 7)
        number >>= (8 - 1)
        # single byte char
        if number == 0:
            index += 1
            continue

        # validate multi-byte char
        number_of_ones = 0
        while True:
            number = data[index] & (2 ** (7 - number_of_ones))
            number >>= (8 - number_of_ones - 1)
            if number == 1:
                number_of_ones += 1
            else:
                break

            if number_of_ones > 4:
                return False

        if number_of_ones == 1:
            return False

        # move on to check the next byte in a multi-byte char sequence
        index += 1

        # check for out of bounds and exit early
        if index >= len(data) or index >= (index + number_of_ones - 1):
            return False

        # every next byte has to start with "10"
        for i in range(index, index + number_of_ones - 1):
            number = data[i]
            number >>= (8 - 1)
            if number != 1:
                return False
            number >>= (8 - 1)
            if number != 0:
                return False

            index += 1

    return True
