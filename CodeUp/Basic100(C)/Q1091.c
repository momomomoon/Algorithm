#include <stdio.h>
int main() {
    long int a, m, d, n;
    scanf("%ld %ld %ld %ld", &a, &m, &d, &n);
    for(int i=1; i<n; i++){
        a = (a * m) + d;
    }
    printf("%ld\n", a);
    return 0;
}
