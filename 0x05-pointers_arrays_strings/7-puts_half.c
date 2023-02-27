#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: The string
 */
#include <stdio.h>

void puts_half(char *str)
{
    int len = 0;
    char *p = str;

    while (*p != '\0') {
        len++;
        p++;
    }

    int half_len = (len + 1) / 2;

    for (int i = half_len; i < len; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
}






