# 0x21. Substring with concatenated words

📂 _Specializations > Interview Preparation > Algorithms_

## Task

Write a function that finds all the possible substrings containing a list of words, within a given string.

- Prototype: **int *find_substring(char const *s, char const \**words, int nb_words, int *n);**, where
- **s** is the string to scan
- **words** is the array of words all substrings must be a concatenation arrangement of
- **nb_words** is the number of elements in the array **words**
- **n** holds the address at which to store the number of elements in the returned array.
- Your function must return an allocated array, storing each index in **s**, at which a substring was found. If no solution is found, NULL can be returned
- All **words** in the array words are the same length
- A valid substring of **s** is the concatenation of each word in **words** exactly once and without any intervening characters

```c
$ cat main.c
#include <stdlib.h>
#include <stdio.h>

#include "substring.h"

int main(int ac, char const **av)
{
    char const *s;
    char const **words;
    int nb_words;
    int *indices;
    int n;
    int i;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s <string> [word [word2 ...]]\n", av[0]);
        return (EXIT_FAILURE);
    }

    s = av[1];
    words = av + 2;
    nb_words = ac - 2;

    indices = find_substring(s, words, nb_words, &n);

    printf("Indices -> [");
    for (i = 0; i < n; i++)
    {
        if (i)
            printf(", ");
        printf("%d", indices[i]);
    }
    printf("]\n");

    return (EXIT_SUCCESS);
}
$  gcc -Wall -Wextra -Werror -pedantic main.c substring.c
$ ./a.out barfoothefoobarman foo bar
Indices -> [0, 9]
$ ./a.out wordgoodgoodgoodbestword word good best word
Indices -> []
$ ./a.out wordgoodgoodgoodbestword word good best good
Indices -> [8]
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

