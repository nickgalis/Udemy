//
// Created by nickg on 1/16/2024.
//

#include <stdio.h>

int main(void) {
    int length;

    printf("Enter length of array: \n");
    scanf("%d", &length);

    int array[length];

    int i, j;

    for (i = 0; i < length; i++) {
        printf("Enter element at position %d: \n", i);
        scanf("%d", &array[i]);
    }

    for (j = 0; j < length; j++) {
        printf("%d\n", array[j]);
    }


    return 0;
}
