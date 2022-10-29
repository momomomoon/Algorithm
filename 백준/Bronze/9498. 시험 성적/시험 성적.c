#include <stdio.h>

int main(void){
    
    int score;

    scanf("%d",&score);
    
    if(0 <= score && score <=100){
        if(90<=score && score<=100){
        puts("A");
        } else if(80<=score && score<=89){
          puts("B");
        } else if(70<=score && score<=79){
          puts("C");
        } else if(60<=score && score<=69){
          puts("D");
        } else {
          puts("F");
        }
    }
    return 0;
}