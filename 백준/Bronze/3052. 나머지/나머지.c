#include <stdio.h>

int main() {
    int remainderCount[42] = {0};  // 각 나머지의 개수를 저장하는 배열

    // 10개의 수 입력받기
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        int remainder = num % 42;
        remainderCount[remainder]++;
    }

    // 서로 다른 나머지의 개수 세기
    int distinctCount = 0;
    for (int i = 0; i < 42; i++) {
        if (remainderCount[i] > 0) {
            distinctCount++;
        }
    }

    // 결과 출력
    printf("%d\n", distinctCount);

    return 0;
}
