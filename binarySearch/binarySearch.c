#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int binarySearch(int lengthArr, int *arr, int n){
    int low = 0, hight = arr[lengthArr - 1];

    while (low <= hight){
        int mid = low + hight;
        double value = arr[mid];
        if(value == n) {return mid;}
        else if (value > n) hight = mid - 1;
        else if (value < n) low = mid + 1;
    }
    return 0;
}