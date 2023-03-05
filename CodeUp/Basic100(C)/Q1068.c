#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(100 >= a && a >= 90){
        puts("A");
    } else if(89 >= a && a >= 70){
        puts("B");
    } else if(69 >= a && a >= 40){
        puts("C");
    } else {
        puts("D");
    }
    return 0;
}