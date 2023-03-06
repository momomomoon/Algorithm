#include <stdio.h> 
int main() {
    int n, x=0, y=0;
    int index[20][20]={};
    scanf("%d", &n); 
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        index[x][y] = 1;
    } 
    

    for(int j=1; j<=19; j++){ 
        for(int i=1; i<=19; i++){
            printf("%d ", index[j][i]);
        }

        puts("");
    }
    return 0;
}
