#include <stdio.h> 
int main() {
    int x, y, n;
    int index[20][20];
    //값입력
    for(int i=1; i<=19; i++){
        for(int j=1; j<=19; j++){
            scanf("%d", &index[i][j]);
        }
    }
    //1 구역 설정
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d %d", &x, &y);
        for(int j=1;j<=19; j++){
            if(index[x][j]==0){
                index[x][j]=1;
            } else{
                index[x][j]=0;
            }
        }
        for(int j=1; j<=19; j++){
            if(index[j][y]==0){
                index[j][y]=1;
            } else {
                index[j][y]=0;
            }
        }
        }
    //뒤집기출력
    for(int i=1; i<=19; i++){
        for(int j=1; j<=19; j++){
            printf("%d ", index[i][j]);
        }
        puts("");
    }

    return 0;
}
