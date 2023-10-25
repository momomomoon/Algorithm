#include<stdio.h>
int main(){
    
    int busketSize, totalLoop, busketFirst, bustketEnd;
    scanf("%d %d", &busketSize, &totalLoop);
    int array[101] = {0};

    // 바구니 초기화
    for(int i = 1; i <= busketSize; i++)
    {
        array[i] = i; //1, 2, 3, 4, 5

    }

    // 공 교환
    int temp = 0;
    for(int i = 1; i <= totalLoop; i++)
    {
        scanf("%d %d", &busketFirst, &bustketEnd);
        temp = array[busketFirst];
        array[busketFirst] = array[bustketEnd];
        array[bustketEnd] = temp;
    }

    // 바구니 출력
    for(int i = 1; i<= busketSize; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;

}