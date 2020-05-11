#include <stdio.h>

int HanoiTowerMove(int num, char from, char by, char to){
    
    //탈출조건
    if (num==1)
    {
        printf("Move DISK 1 from %c to %c \n", from, to);
    }
    else
    {
        // n-1 개의 원파을 중간으로 이동
        HanoiTowerMove(num-1, from, to, by);
        // 밑판 이동
        printf("Move DISK %d from %c to %c \n", num, from, to);
        // 중간에서 목적지로 이동
        HanoiTowerMove(num-1, by, from, to);
    }
    
}

int main(void){
    HanoiTowerMove(4, 'A', 'B', 'C');
    return 0;
}