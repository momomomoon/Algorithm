#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a > 0){
        puts("plus");
    } else {
        puts("minus");
    }
    if(a%2 == 0){
        puts("even");
    } else {
        puts("odd");
    }
    return 0;
}