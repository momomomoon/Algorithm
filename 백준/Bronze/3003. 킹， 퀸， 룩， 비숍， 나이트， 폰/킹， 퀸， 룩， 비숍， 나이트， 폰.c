#include<stdio.h>
int main(void){
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f); // 0 0 0 0 0 0 

    if(a != 1 || b != 1 || c != 2 || d != 2 || e != 2 || f != 8){
        printf("%d %d %d %d %d %d", 1 - a, 1 - b, 2 - c, 2 - d, 2 - e, 8 - f);

    }

    return 0;
}