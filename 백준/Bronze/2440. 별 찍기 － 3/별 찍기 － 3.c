#include<stdio.h>
int main()
{
    //N개 줄
    int n = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n-i); j++)
        {
            printf("*");
        
        }
        
        printf("\n");
    }
     
    return 0;
}