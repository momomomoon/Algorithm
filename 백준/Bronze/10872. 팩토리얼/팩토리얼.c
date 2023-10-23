#include<stdio.h>
int main()
{
    //0<=N, N!
    int n, i = 1;
    int num = 1;
    scanf("%d", &n);

    for(; i <= n; i++)
    {
        num *= i;
    }

    printf("%d\n", num);
    return 0;
}