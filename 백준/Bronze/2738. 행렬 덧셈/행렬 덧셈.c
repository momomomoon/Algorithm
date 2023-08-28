#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int nm1[n][m];
    int nm2[n][m];
    int nmSum[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &nm1[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &nm2[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            nmSum[i][j] = nm1[i][j] + nm2[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", nmSum[i][j]);
        }
        printf("\n");
    }


    return 0;
}