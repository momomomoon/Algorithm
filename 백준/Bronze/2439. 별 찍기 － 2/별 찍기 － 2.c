#include<stdio.h>
int main(){
    int n, i, j, k;
    //n 입력
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) //n = 5
    {
        for(j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for(k = 0; k < i; k++)
        {
            printf("*");
        }
       
        printf("\n");
    }
    
    return 0;
}