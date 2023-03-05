#include <stdio.h>
int main() {
    int a, b, c ;
    scanf("%d %d %d", &a, &b, &c);
    if(a%2 == 0 && b%2 == 0 && c%2 == 0){
        printf("%d\n%d\n%d\n", a, b, c);
    } else if(a%2 == 0 && b%2 == 0){
        printf("%d\n%d\n", a, b);
    } else if(a%2 == 0 && c%2 == 0){
        printf("%d\n%d\n", a, c);
    } else if(b%2 == 0 && c%2 == 0){
        printf("%d\n%d\n", b, c);
    } else if(a%2 == 0){
        printf("%d\n", a);
    } else if(b%2 == 0){
        printf("%d\n", b);
    } else if(c%2 == 0){
        printf("%d\n", c);
    }
    return 0;
}
/*
답안지: 코드 간소화가능
if(a%2==0)
{
  printf(“%d”, a);
}

if(b%2==0)
{
  printf(“%d”, b);
}

if(c%2==0)
{
  printf(“%d”, c);
}

*/