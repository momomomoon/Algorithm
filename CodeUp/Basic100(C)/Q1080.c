#include<stdio.h>
int main(void){
    int n; //10
    int sum=0;
    scanf("%d", &n);
    for(int i=0; sum<n;i++){ //10
        sum += i; //10
        if(sum>=n) 
            printf("%d\n", i);
        

    }
    return 0;
}