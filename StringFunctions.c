#include "StringFunctions.h"

#include <stdio.h>
#include <stdlib.h>


char *_strcat(char *dest, const char *src) {

    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }

    int j = 0;

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;

}

int find_frequency(char *str, char to_find) {

    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find) {
            count++;
        }
        i++;
    }

    return count;

}

void remove_non_alpha(char *str) {

    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

}

int _strlen(char *str) {

    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;

}

void _strcpy(char *dest, char *src) {

    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

}

char *substring(char *str, int start, int end) {

    char *sub = malloc(sizeof(char) * (end - start + 1));

    int i = start;
    int j = 0;

    while (i < end) {
        sub[j] = str[i];
        i++;
        j++;
    }

    sub[j] = '\0';

    return sub;

}



