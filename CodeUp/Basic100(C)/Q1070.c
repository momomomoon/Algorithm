#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    switch (a){
    case 12:
    case 1:
    case 2:
        puts("winter");
        break;
    case 3:
    case 4:
    case 5:
        puts("spring");
        break;
    case 6:
    case 7:
    case 8:
        puts("summer");
        break;  
    case 9:
    case 10:
    case 11:
        puts("fall");
        break; 
    }

    return 0;
}