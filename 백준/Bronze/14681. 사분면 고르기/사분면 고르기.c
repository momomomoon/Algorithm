#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    
    if(0 < x && 0 < y){
        puts("1");
    } else if ( 0 > x && 0 < y){
         puts("2");
    } else if ( 0 > x && 0 > y){
         puts("3");
    } else if ( 0 < x && 0 > y){
         puts("4");
    }

    return 0;
}