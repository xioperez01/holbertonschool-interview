# 0x1F. Pascal's Triangle

📂 _Specializations > Interview Preparation > Algorithms_

## Task

Create a function **def pascal_triangle(n):** that returns a list of lists of integers representing the Pascal’s triangle of **n**:

Returns an empty list if **n <= 0**
You can assume **n** will be always an integer

```py
$ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
pascal_triangle = __import__('0-pascal_triangle').pascal_triangle

def print_triangle(triangle):
    """
    Print the triangle
    """
    for row in triangle:
        print("[{}]".format(",".join([str(x) for x in row])))


if __name__ == "__main__":
    print_triangle(pascal_triangle(5))
$
$ ./0-main.py
[1]
[1,1]
[1,2,1]
[1,3,3,1]
[1,4,6,4,1]
$
```

## Environment

- Allowed editors: **vi**, **vim**, **emacs**.
- OS: Ubuntu 14.04 LTS
- Language: python3 (version 3.4.3)
- PEP 8 - [Style](https://www.python.org/dev/peps/pep-0008/) // [Docstring](https://sphinxcontrib-napoleon.readthedocs.io/en/latest/example_google.html)

## Autors 🎀

Angie Pérez <a href="https://www.linkedin.com/in/angie-xiomara-perez-munoz/" target="_blank"><img align="center" src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linkedin/linkedin-original.svg" alt="angie pérez" height="30" width="40" /></a>
