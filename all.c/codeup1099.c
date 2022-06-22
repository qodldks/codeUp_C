#include <stdio.h>

int main()
{
    int x=1,y=1;//현재위치=(1,1)
    int map[10][10]={};

    for (int i = 0; i <= 9; i++)
        for (int  j= 0; j <= 9; j++)
            scanf("%d",&map[j][i]);//상자구조 입력받기

    for (;;)
    {   
        if(map[x][y]==2)//현재위치에 먹이가 있다면
        {
            map[x][y]=9;
            break;//종료
        }
        else if(map[x+1][y]%2==0)//오른쪽에 벽이 없으면
        {
            map[x][y]=9;
            x++;
        }
        else if (map[x][y+1]%2==0)//밑쪽에 벽이 없으면
        {
            map[x][y]=9;
            y++;
        }
        else//갈수없는길이 없으면
        {
            map[x][y]=9;
            break;//종료
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        for (int  j= 0; j <= 9; j++)
            printf("%d ",map[j][i]);
        printf("\n");
    }

    return 0;
}