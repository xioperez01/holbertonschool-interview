#  2048 (single line)

📁 __Specializations > Interview Preparation > Algorithms__
🏷️  c 🏷️ linear search

## Task

The goal of this task is to reproduce the [2048 game](https://play2048.co/)(NSFW !!) mechanics on a single horizontal line.

Given an array of integers, we want to be able to slide & merge it to the left or to the right. Identical numbers, if they are contiguous or separated by zeros, should be merged (See example)

* Write a function that slides and merges an array of integers
* Prototype: **int slide_line(int \*line, size_t size, int direction);**
* Where **line** points to an array of integers containing **size** elements, that must be slided & merged to the direction represented by **direction**. **direction** can be either:
  * **SLIDE_LEFT**
  * **SLIDE_RIGHT**
  * If it is something else, the function must fail
  * Both macros **SLIDE_LEFT** and **SLIDE_RIGHT// must be defined in **slide_line.h**
* Your function must return **1** upon success, or **0** upon failure
* You are **not allowed** to allocate memory dynamically (malloc, calloc, …)

## Example

``` C
$ cat 0-main.c
#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"
/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    int line[LINE_SIZE];
    int direction;
    size_t i, size;

    if (ac < 3)
    {
        fprintf(stderr, "Usage: %s <R/L> <n1> [n2...]\n", av[0]);
        return (EXIT_FAILURE);
    }

    /* Command line arguments to array of int */
    size = ac - 2;
    if (size > LINE_SIZE)
        size = LINE_SIZE;
    for (i = 0; i < size; i++)
        line[i] = atoi(av[i + 2]);

    /* Print the array */
    print_array(line, size);

    /* Parse direction */
    switch (*(av[1]))
    {
    case 'L':
        direction = SLIDE_LEFT;
        printf("Slide to the left\n");
        break;
    case 'R':
        direction = SLIDE_RIGHT;
        printf("Slide to the right\n");
        break;
    default:
        fprintf(stderr, "Unknown direction '%c'. Please use 'L' or 'R'", *(av[1]));
        return (EXIT_FAILURE);
    }

    /* Slide and merge */
    if (!slide_line(line, size, direction))
    {
        fprintf(stderr, "Failed to slide and merge line\n");
        return (EXIT_FAILURE);
    }

    /* Print the array */
    print_array(line, size);

    return (EXIT_SUCCESS);
}
```

```bash
$ ./0-slide_line L 2 2 0 0
Line: 2, 2, 0, 0
Slide to the left
Line: 4, 0, 0, 0
$ ./0-slide_line L 2 2 0 0 0 0 0 2 0 0 0 2 0 4
Line: 2, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 4
Slide to the left
Line: 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
$ ./0-slide_line R 2 2 2 2
Line: 2, 2, 2, 2
Slide to the right
Line: 0, 0, 4, 4
$
```

## Environment

* Allowed editors: **vi**, **vim**, **emacs**.
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4 using the **flags -Wall -Werror -Wextra and -pedantic**
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)
