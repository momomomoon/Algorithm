#include<stdio.h>
int main(){
    int num1, num2, sum1, sum2, sum3;
    scanf("%d%d",&num1, &num2); 
    
    printf("%d\n", sum1 = num1*(num2%10));
    printf("%d\n", sum2 = num1*(num2%100/10));
    printf("%d\n", sum3 = num1*(num2%1000/100));

    printf("%d\n", sum1 + (sum2 * 10) + (sum3 * 100));
    
    return 0;
}