# 0x0D. Array to AVL

📁 _Specializations > Interview Preparation > Algorithms_

🏷️ avl 🏷️ binary trees 🏷️ c

## More Info

### Data structures

Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

#### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

### Print function

To match the examples in the tasks, you are given [this Function](https://github.com/holbertonschool/0x1C.c)

## Tasks

### 0. AVL - From sorted array

Write a function that builds an AVL tree from an array

- Prototype: **avl_t \*sorted_array_to_avl(int \*array, size_t size);**
- Where **array** is a pointer to the first element of the array to be converted
- And **size** is the number of element in the array
- Your function must return a pointer to the root node of the created AVL tree, or **NULL** on failure
- You can assume there will be no duplicate value in the array
- You are not allowed to rotate
- You can only have 3 functions in your file

## Example

```c
$ cat 0-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; ++i)
        printf("(%03d)", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        1, 2, 20, 21, 22, 32, 34, 47, 62, 68,
        79, 84, 87, 91, 95, 98
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = sorted_array_to_avl(array, n);
    if (!tree)
        return (1);
    print_array(array, n);
    binary_tree_print(tree);
    return (0);
}
```

```c
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
$ ./0-sorted_array_to_avl
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)
$
```

## Environment

- Allowed editors: **vi**, **vim**, **emacs**.
- Language: C
- OS: Ubuntu 14.04 LTS
- Compiler: gcc 4.8.4 using the **flags -Wall -Werror -Wextra and -pedantic**
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Autors :ribbon:

Angie Pérez [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/xiommyperez)
