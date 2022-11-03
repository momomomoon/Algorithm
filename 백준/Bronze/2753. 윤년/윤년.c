#include<stdio.h>
int main(void){
    int yun_year;
    
    scanf("%d", &yun_year);
    
    if(yun_year % 4 == 0 && yun_year % 100 != 0 || yun_year % 400 == 0){
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}