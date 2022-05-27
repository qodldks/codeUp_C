#include <stdio.h>

int main()
{
    //첫째줄에 판 크기(w,h),둘째줄에 입력횟수(n)
    //셋째줄부터 막대길이(l),방향d(0=가로,1=세로),막대시작좌표(x,y)
    int w,h,n,l,d,x,y;
    int tab[101][101]={};
    scanf("%d %d",&w,&h);
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d %d %d",&l,&d,&x,&y);
        if (d)
        {
            for ( int i = 0; i < l; i++)
                tab[x+i-1][y-1]=1;
        }
        else
        {
            for ( int i = 0; i < l; i++)
                tab[x-1][y+i-1]=1;
        }
    }
    for (int j = 0; j < w; j++)
    {
        for (int q = 0; q < h; q++)
            printf("%d ",tab[j][q]);
        printf("\n");
    }
    
    return 0;
}