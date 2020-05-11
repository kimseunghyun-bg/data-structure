#include <stdio.h>

int BSearch(int ar[], int len, int target){
    // 초기화
    int first = 0;
    int last = len;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (ar[mid] == target)
        {
            return mid;
        }
        else
        {
            if (ar[mid] > target)
            {
                mid = first+1;
            } else
            {
                mid = last-1;
            }
        }
    }
    
    return -1;
    
}