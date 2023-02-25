#include <stdio.h>

int main() {
    char data[51] = ""; //0~50자 저장가능, "" 빈배열
    scanf("%s", data); //배열은 & 사용안함
    printf("%s\n", data);
    return 0;
}