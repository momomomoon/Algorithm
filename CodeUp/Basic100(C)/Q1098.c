#include <stdio.h>

int main() {
    int h, w, n, l, d, x, y;
    int board[100][100] = {0};
    scanf("%d %d %d", &h, &w, &n);

    // 막대 정보 입력 받아서 격자판에 적용
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        x -= 1;
        y -= 1;

        if (d == 0) {  // 가로 방향
            for (int j = 0; j < l; j++) {
                board[x][y+j] = 1;
            }
        } else {  // 세로 방향
            for (int j = 0; j < l; j++) {
                board[x+j][y] = 1;
            }
        }
    }

    // 격자판 출력
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}