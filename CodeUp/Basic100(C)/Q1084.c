#include <stdio.h>
int main() {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    for(int i=0; i<=r-1; i++){
       
            for(int j=0; j<=g-1; j++){
                 
                for(int k=0; k<=b-1; k++){
                    printf("%d %d %d\n", i, j, k);
                }
            } 
    }
    printf("%d\n", r * g * b);
    return 0;
    
}