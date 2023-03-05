#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    
    switch(a){
        case 'A':  puts("best!!!");
        break;
        case 'B': puts("good!!");
        break;
        case 'C': puts("run!");
        break;
        case 'D': puts("slowly~");
        break;
        default: puts("what?");
    }

    return 0;
}