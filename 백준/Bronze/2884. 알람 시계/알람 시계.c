#include<stdio.h>
int main(void){
    int h, m, result;
    scanf("%d %d", &h, &m);
    result = m - 45;
    
    if(result < 0){
        if(h == 0){
            printf("%d %d\n", 24 - 1, 60 + result);
        }   else if(h < 24){
            printf("%d %d\n", h - 1, 60 + result);
        }
    } else if(result > 0 || result == 0){
        printf("%d %d\n", h, result);
    }

    return 0;
}