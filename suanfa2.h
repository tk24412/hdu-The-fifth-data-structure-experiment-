#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void StringToInt(char str_in[], int a_in[]) {
    int index = 0;
    int num = 0;
    int len = strlen(str_in);
    int i = 0;

    while (i <= len) {
        if (str_in[i] == ',' || str_in[i] == '\0') {
            a_in[index] = num;
            index++;
            num = 0;
        }
        else {
            num = num * 10 + (str_in[i] - '0');
        }
        i++;
    }
}