#include<stdio.h>
int main(void){
    int x, y, z;
    scanf("%d", &x);

   for(int i = 0; i < x; i++){
        scanf("%d %d", &y, &z);
        printf("%d\n", y + z);
   }

    return 0;
}