#include<stdio.h>
int main(){
    int a, b;

    do{
    scanf("%d %d", &a, &b);
    if(0 < a && b < 10){
        printf("%d\n", a + b);
    } else {
        break;
    }
    } while(1);

    return 0;
}