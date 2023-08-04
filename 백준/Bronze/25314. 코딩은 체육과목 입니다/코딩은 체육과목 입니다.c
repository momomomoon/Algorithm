#include<stdio.h>
int main(void){
    int nByte;
    
    scanf("%d", &nByte);
    nByte = nByte / 4;
    for(int i = 0; i < nByte; i++){
        printf("long ");
    }
    printf("int");
    
    return 0;
}