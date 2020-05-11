#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target){
    int mid;

    //탈출조건
    if(last < first){
        return -1;
    }

    mid = (first+last) / 2;

    if (ar[mid] == target)
    {
        return mid;
    }
    else if (ar[mid] > last)
    {
        last = mid + 1;
    }
    else
    {
        first = mid - 1;
    }

    return BSearchRecur(ar, first, last, target);
    
}