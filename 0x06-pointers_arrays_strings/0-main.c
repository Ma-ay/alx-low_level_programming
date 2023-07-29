root@c58493a57251:/# cd alx-low_level_programming
root@c58493a57251:/alx-low_level_programming# ls
0x00-hello_world
0x01-variables_if_else_while
0x02-functions_nested_loops
0x05-pointers_arrays_strings
0x06-pointers_arrays_strings
README.md
root@c58493a57251:/alx-low_level_programming# cd 0x02-functions_nested_loops
root@c58493a57251:/alx-low_level_programming/0x02-functions_nested_loops# ls
0-putchar.c  _putchar    README.md
main.h       _putchar.c
root@c58493a57251:/alx-low_level_programming/0x02-functions_nested_loops# catbmain.h
bash: catbmain.h: command not found
root@c58493a57251:/alx-low_level_programming/0x02-functions_nested_loops# Cat main.h
bash: Cat: command not found
root@c58493a57251:/alx-low_level_programming/0x02-functions_nested_loops# ls main.h
root@c58493a57251:/alx-low_level_programming/0x02-froot@c58493a57251:/alx-low_level_programming/0x02-f
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#ifndef MAIN_H_INCLUDED
unctions_nested_loops# cd..
bash: cd..: command not found
root@c58493a57251:/alx-low_level_programming/0x02-functions_nested_loops# cd ..
root@c58493a57251:/alx-low_level_programming# ls
\**
0x00-hello_world
0x01-variables_if_else_while
0x02-functions_nested_loops
0x05-pointers_arrays_strings
0x06-pointers_arrays_strings
README.md
root@c58493a57251:/alx-low_level_programming# CDs 0x06-pointers_arrays_strings
bash: CDs: command not found
root@c58493a57251:/alx-low_level_programming# cd 0x06-pointers_arrays_strings
root@c58493a57251:/alx-low_level_programming/0x06-pointers_arrays_strings# ls
0-strcat.c
root@c58493a57251:/alx-low_level_programming/0x06-pointers_arrays_strings# vi main.h file
2 files to edit
root@c58493a57251:/alx-low_level_programming/0x06-pointers_arrays_strings# 0-strcat.c
bash: 0-strcat.c: command not found
root@c58493a57251:/alx-low_level_programming/0x06-pointers_arrays_strings# vi 0-strcat.c
root@c58493a57251:/alx-low_level_programming/0x06-pointers_arrays_strings# git add .
root@c58493a57251:/alx-low_level_programming/0x06-pointers_arrays_strings# git commit -m " 0-strcat.c"[master 6f49215]  0-strcat.c
 2 files changed, 15 insertions(+), 1 deletion(-)
 create mode 100644 0x06-pointers_arrays_strings/main.h
include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
} 
