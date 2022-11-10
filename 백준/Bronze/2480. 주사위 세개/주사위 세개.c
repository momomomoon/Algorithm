#include<stdio.h>
int main(){
    int num1, num2, num3;
    int money = 100;
    int chenWon = 1000;
    int bigMoney = 10000;

    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 != num2 && num2 != num3 && num1 != num3){ 
        if(num1 > num2 && num1 > num3){
            printf("%d\n", num1 * money);
        } else if(num1 < num2 && num2 > num3){
            printf("%d\n", num2 * money);
        } else {
            printf("%d\n", num3 * money);
        } //complete
    } else if(num1 != num2 || num1 != num3 && num2 != num3){
            if(num1 == num2){
                printf("%d\n", chenWon + num1 * money);
            } else if(num2 == num3){
                printf("%d\n", chenWon + num2 * money);
            } else {
                printf("%d\n", chenWon + num3 * money);
            }
    } else if(num1 == num2 && num1 == num3 && num2 == num3){
        printf("%d\n", bigMoney + num1 * chenWon);
    } 

    return 0;
}