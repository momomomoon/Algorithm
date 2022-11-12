#include<stdio.h>
int main(){
    int line, numA, numB;
    scanf("%d", &line);

    for(int i = 1; i <= line; i++){
        scanf("%d %d", &numA, &numB);
        printf("Case #%d: %d\n", i, numA + numB);
    }
    
    return 0;
}