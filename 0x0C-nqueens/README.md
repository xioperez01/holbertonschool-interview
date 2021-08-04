# 0x0C. N Queens

📁 *Specializations > Interview Preparation > Algorithms*

🏷️ python 🏷️ recursion

## Tasks

### 0. N queens

The N queens puzzle is the challenge of placing N non-attacking queens on an N×N chessboard. Write a program that solves the N queens problem.

- Usage: **nqueens N**
  - If the user called the program with the wrong number of arguments, print **Usage: nqueens N**, followed by a newline, and exit with the status **1**
- where N must be an integer greater or equal to **4**
  - If N is not an integer, print **N must be a number**, followed by a new line, and exit with the status **1**
  - If N is smaller than **4**, print **N must be at least 4**, followed by a new line, and exit with the status **1**
- The program should print every possible solution to the problem
  - One solution per line
  - Format: see example
  - You don’t have to print the solutions in a specific order
- You are only allowed to import the **sys** module

Read: [Queen](https://en.wikipedia.org/wiki/Queen_%28chess%29), [Backtracking](https://en.wikipedia.org/wiki/Backtracking)

## Example

```python
$ ./0-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
$ ./0-nqueens.py 6
[[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]]
[[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]]
[[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]]
[[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]]
$
```

## Enviroment

- Allowed editors: vi, vim, emacs
- OS: Ubuntu 14.04 LTS
- Language: python3 (version 3.4.3)
- PEP 8 - [Style](https://www.python.org/dev/peps/pep-0008/) // [Docstring](https://sphinxcontrib-napoleon.readthedocs.io/en/latest/example_google.html)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)
