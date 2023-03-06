#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    reload:
    while(num!=0){
        printf("%d\n", num);
        num--;
        goto reload;
    }
    return 0;
}