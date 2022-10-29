#include <stdio.h>

int main(){
    int num1, num2;
    int sum;
    int i = 0;
    scanf("%d",&i);
    
    while(i){
     scanf("%d%d #",&num1,&num2);
     sum = num1 + num2;
     printf("%d\n",sum);
     i--;
     if(i == 0){
         break;
     }
    }
    
    return 0;
}
