# UTF-8 Validation

📁 __Specializations > Interview Preparation > Algorithms__

🏷️ <span style="background-color: #00b300">bit manipulation</span> <span style="background-color: #cc0000">python</span>

## Resources

Read or watch:

* [UTF-8](https://en.wikipedia.org/wiki/UTF-8)
* [Characters, Symbols, and the Unicode Miracle](https://www.youtube.com/watch?v=MijmeoH9LT4)

## Tasks

Write a method that determines if a given data set represents a valid UTF-8 encoding.

* Prototype: **def validUTF8(data)**
* Return: **True** if data is a valid UTF-8 encoding, else return **False**
* A character in UTF-8 can be 1 to 4 bytes long
* The data set can contain multiple characters
* The data will be represented by a list of integers
* Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer

## Example

```python
$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))
$
```

```sript
$ ./0-main.py
True
True
False
$
```

## Enviroment

* Allowed editors: **vi**, **vim**, **emacs*
* OS: Ubuntu 14.04 LTS
* Language: python3 (version 3.4.3)
* PEP 8 - [Style](https://www.python.org/dev/peps/pep-0008/) // [Docstring](https://sphinxcontrib-napoleon.readthedocs.io/en/latest/example_google.html)

## Autors :ribbon:

 Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)