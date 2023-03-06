#include <stdio.h>
int main() {
    char check;
    char alpha = 'a';

    scanf("%c", &check);
    do{
        printf("%c ", alpha);
        
    }while(alpha++ < check);
    
    return 0;
}