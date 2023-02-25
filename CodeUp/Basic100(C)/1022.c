#include <stdio.h>

int main() {
    char data[2001] = "";
    fgets(data, 2000, stdin);
    printf("%s\n", data);
    return 0;
}
  
//fgets(변수명, 최대저장크기, stdin(키보드입력)))함수, 공백포함 문자 입력