# 0x1E. Wild Compare

📂 _Specializations > Interview Preparation > Algorithms_

## Task

Write a function that compares two strings and returns **1** if the strings can be considered identical, otherwise return **0**.

- **Prototype: int wildcmp(char \*s1, char \*s2);**
- **s2** can contain the special character **\***.
- The special char **\*** can replace any string (including an empty string).

```c
$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-wildcmp.c -o 0-wildcmp
$ ./0-wildcmp
 1
1
1
1
1
1
1
0
1
1
0
0
$
```

## Environment

- Allowed editors: **vi**, **vim**, **emacs**.
- Language: C
- OS: Ubuntu 14.04 LTS
- Compiler: gcc 4.8.4 using the **flags -Wall -Werror -Wextra and -pedantic**
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Autors 🎀

Angie Pérez <a href="https://www.linkedin.com/in/angie-xiomara-perez-munoz/" target="_blank"><img align="center" src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linkedin/linkedin-original.svg" alt="angie pérez" height="30" width="40" /></a>
