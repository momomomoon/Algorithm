#include<stdio.h>
int main(){
    
    int n;
    int max, min = 0;
    
    scanf("%d", &n);
    int numBox[n];

    for(int i = 0; i < n; i++)
    {    
        scanf("%d", &numBox[i]);
        
    }

    max = numBox[0];
    min = numBox[0];

    for(int j = 0; j < n; j++)
    {
       if(numBox[j] > max)
       {
        max = numBox[j];
       }
       if(numBox[j] < min)
       {
        min = numBox[j];
       }
    }

    printf("%d %d \n", min, max);

    return 0;
}