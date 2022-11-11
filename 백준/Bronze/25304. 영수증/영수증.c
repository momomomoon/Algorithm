#include<stdio.h>
int main(){
    int totalMoney, buyObject;
    int result, sum = 0;
    
    scanf("%d %d", &totalMoney, &buyObject);
    for (int i = 1; i <= buyObject; i++){
       int buy = 0;

       scanf("%d %d", &result, &buy);
       sum += result * buy;
    }
        if(totalMoney == sum){
            puts("Yes");
       } else {
            puts("No");
        }
        
    return 0;
}