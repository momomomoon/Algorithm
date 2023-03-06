#include <stdio.h>
int main() {
    long int a, r, n;
    scanf("%ld %ld %ld", &a, &r, &n);
    for(int i=0; i<n-1; i++){
        a = a*r;

    }
    printf("%ld\n", a);

    return 0;
}
