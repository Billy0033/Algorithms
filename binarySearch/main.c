#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/*
Алгоритм Бинарного поиска работает только при отсортированном массиве, 
соответсвтенно проверки на отсортированный массив не добавлялось!

На вход в первой строке подаются числа: 
1) lengthArray - длина массива,
2) n - число, которое надо найти в массиве.

Во второй строке файла подается отсортированный массив.

В ответ выводится позиция искомого числа в массиве,
если такого числа нет, то выводится "There is no such number".
*/
int main (){
    FILE *fin = fopen("in.txt", "r");
    int lengthArr, n, answer;
    fscanf(fin, "%d ", &lengthArr);
    fscanf(fin, "%d\n", &n);
    int *arr = malloc(sizeof(double) * lengthArr);
    for(int i = 0; i < lengthArr; i++){
        fscanf(fin, "%d ", &arr[i]);
    }

    answer = binarySearch(lengthArr, arr, n);

    if(answer == 0){
        printf("There is no such number!");
    }
    else
        printf("%d\n ", answer);

    free(arr);
    fclose(fin);
    return 0;
}