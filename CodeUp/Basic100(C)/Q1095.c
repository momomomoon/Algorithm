#include <stdio.h> 
int main() {
    int n, k;
    int index[10000]={};
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &index[i]);
        if(i == 1)
            k = index[1];
        if(index[i] < k){ //10 <= 10, 
            k = index[i];
        }
    }
    printf("%d\n", k);
    return 0;
}
