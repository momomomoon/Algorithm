#include <stdio.h>
int main() {
    float w, h, b;
    scanf("%f %f %f", &w, &h, &b);
    printf("%.2f MB\n", (((w*h*b)/8)/1024)/1024);

    return 0;
    
}