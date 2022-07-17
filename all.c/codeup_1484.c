#include <stdio.h>

int a[105][105]={1};
int i,j,x,y,n,m;
dy[4]={0,1,0,-1}, dx[4]={1,0,-1,0};

safe(int a,int b) {return (0<=a&&a<n)&&(0<=b && b<n);}
int main()
{
    int ny,nx,cnt=1;
    scanf("%d %d",&n,&m);
    int s=n*m;

    while (s>cnt)
    {
        ny=y+dy[i%4], nx=x+dx[i%4];
        if (safe(ny,nx) && !a[ny][nx])
        {
            a[ny][nx]=++cnt;
            y=ny,x=nx;
        }
        else i++;    
    }

    for ( i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d",a[i][j]);
        printf("\n");
    }
    return 0;
}