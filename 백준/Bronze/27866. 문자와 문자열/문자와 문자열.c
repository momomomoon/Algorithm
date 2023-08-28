
#include<stdio.h>
int main(){

    char text[1001];
    int n;

    scanf("%s", text);
    scanf("%d", &n);

    for(int i = 0; i < n; i++ )
    {
        if(text[i] == text[n-1])
        {
            printf("%c \n", text[n-1]);
            break;
        }
    }

    return 0;
}