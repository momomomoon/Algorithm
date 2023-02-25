#include <stdio.h>

int main() {
    int y, m, d;
    char a, b;
    scanf("%d %c %d %c %d ", &y, &a, &m, &b, &d);
    printf("%04d%c%02d%c%02d\n", y, a, m, b, d);
    return 0;
}
  
  