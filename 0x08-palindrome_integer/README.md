# Palindrome integer

:open_file_folder: _Specializations > Interview Preparation > Algorithms_

:pushpin:  **c** **Recursion**

## Task

Write a function that checks whether or not a given unsigned integer is a palindrome.

* Prototype: **int is_palindrome(unsigned long n);**
* Where **n** is the number to be checked
* Your function must return **1** if **n** is a palindrome, and **0** otherwise
* You are _*not allowed*_ to allocate memory dynamically (malloc, calloc, …)

### Examples

~~~
$ gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
$ ./palindrome 1
1 is a palindrome.
$ ./palindrome 11
11 is a palindrome.
$ ./palindrome 112
112 is not a palindrome.
$ ./palindrome 121
121 is a palindrome.
$ ./palindrome 12345678987654321
12345678987654321 is a palindrome.
$ ./palindrome 123456789987654321
123456789987654321 is a palindrome.
$ ./palindrome 1234567898654321
1234567898654321 is not a palindrome.
$
~~~

## Environment

* Allowed editors: **vi**, **vim**, **emacs**.
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4 using the **flags -Wall -Werror -Wextra and -pedantic**
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)