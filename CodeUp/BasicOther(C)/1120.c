#include<stdio.h>
int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    printf("%.2f\n", (x + y + z) / 3);

    return 0;
}