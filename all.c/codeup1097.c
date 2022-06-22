#include <stdio.h>

int main()
{
    int n,x,y;
    int brd[20][20]={0,};

    for (int i = 0; i < 19; i++)//세로줄
    {
        for (int j = 0; j < 19; j++)//가로줄
            scanf("%d",&brd[i][j]);
    }
    scanf("%d",&n);
    for (int i = 0; i < n; i++)//n번 동안
    {
        scanf("%d %d",&x,&y);
        for (int j = 0; j < 19; j++)//가로줄 반전
        {
            brd[x-1][j]=!brd[x-1][j];
            brd[j][y-1]=!brd[j][y-1];
        }
    }
    for (int i = 0; i < 19; i++)//세로줄
    {
        for (int j = 0; j < 19; j++)//가로줄
            printf("%d ",brd[i][j]);
        printf("\n");
    }
    return 0;
}