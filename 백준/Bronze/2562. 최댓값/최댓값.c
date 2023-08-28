#include<stdio.h>
int main(){
    int max, count;
    int numBox[9] = {};

    /* 배열 자연수 저장*/
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &numBox[i]);
    }

    max = numBox[0];
    count = 1;

    for(int j = 1; j < 9; j++)
    {
        if(numBox[j] > max)
        {
            max = numBox[j];
            count = j + 1;
        } 
    }

    printf("%d \n", max); //max
    printf("%d", count); //count

    return 0;
}
