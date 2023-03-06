#include <stdio.h>
int main() {
    char alpha;
    do{
        scanf("%c", &alpha);
        printf("%c", alpha);
    }while(alpha!='q');
    return 0;
}