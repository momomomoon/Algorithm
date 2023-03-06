#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    reload:
    while(num!=0){
        num--;
        printf("%d\n", num);
        goto reload;
    }
    return 0;
}