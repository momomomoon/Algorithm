#include <stdio.h>
int main() {
    int x;
    scanf("%x", &x);
    for(int i=1; i<16; i++){
        printf("%X*%X=%X\n", x, i, x*i);
    }
    
    return 0;
}