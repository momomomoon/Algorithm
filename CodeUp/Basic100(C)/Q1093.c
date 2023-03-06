#include <stdio.h>
int main() {
    int n, t=0;
    int array[24]={};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        array[t] = array[t]+1;
    }
    for(int i=1; i<=23; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
