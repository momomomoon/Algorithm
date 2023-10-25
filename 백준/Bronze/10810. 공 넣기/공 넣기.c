//메모리 제한 256MB
#include<stdio.h>
int main(){
    
    int n , m, a, b, c;
    scanf("%d %d", &n, &m);
    int array[101] = {0};


    // //배열 초기화
    // for(int i = 1; i <= m; i++)
    // {
    //     array[i] = 0;
    // }

    //배열 값 대입
    for(int i = 1; i <= m; i++)
    {
        
        scanf("%d %d %d", &a, &b, &c);
        for(int j = a; j <= b; j++)
        {
            array[j] = c;
        }
        
    }
    
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", array[i]);

    }

    return 0;

}