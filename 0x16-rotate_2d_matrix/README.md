# 0x16. Rotate 2D Matrix

📂 **Specializations > Interview Preparation > Algorithms**

## Task

### 0.Rain

Given an **n** x **n** 2D matrix, rotate it 90 degrees clockwise.

- Prototype: **def rotate_2d_matrix(matrix):**
- Do not return anything. The matrix must be edited in-place.
- You can assume the matrix will have 2 dimensions and will not be empty.

```python
$ cat 0_main.py
#!/usr/bin/python3
"""
Test 0x16 - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)
$
$ ./main_0.py
[[7, 4, 1],
[8, 5, 2],
[9, 6, 3]]
$
```

## Environment

- Allowed editors: vi, vim, emacs
- OS: Ubuntu 14.04 LTS
- Language: python3 (version 3.4.3)
- PEP 8 - [Style](https://www.python.org/dev/peps/pep-0008/) // [Docstring](https://sphinxcontrib-napoleon.readthedocs.io/en/latest/example_google.html)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)
