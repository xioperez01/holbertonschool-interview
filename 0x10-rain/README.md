# 0x10. Rain

📂 **Specializations > Interview Preparation > Algorithms**

🏷️ linear time 🏷️ python

## Task

### 0.Rain

Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.

- Prototype: **def rain(walls)**
- **walls** is a list of non-negative integers.
- Return: Integer indicating total amount of rainwater retained.
- Assume that the ends of the list (before index 0 and after index walls[-1]) are **not** walls, meanin- they will not retain water.
- If the list is empty return **0**.

``` python
$ cat 0_main.py
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))
$
$ ./0_main.py
6
6
$
```

## Environment

- Allowed editors: vi, vim, emacs
- OS: Ubuntu 14.04 LTS
- Language: python3 (version 3.4.3)
- PEP 8 - [Style](https://www.python.org/dev/peps/pep-0008/) // [Docstring](https://sphinxcontrib-napoleon.readthedocs.io/en/latest/example_google.html)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)
