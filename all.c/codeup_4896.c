#include <stdio.h>
//입력은 왼쪽아래,오른쪽위 좌표
int main()
{
    int point,line,face=0;
    int px[4]={};//p{x1,x2,x3,x4}Z자로
    int py[4]={};//p{y1,2y,y3,y4}Z자로
    int qx[4]={};//q{x1,x2,x3,x4}Z자로
    int qy[4]={};//q{y1,y2,y3,y4}Z자로

    scanf("%d %d %d %d",&px[2],&py[2],&px[1],&py[1]);//p
    scanf("%d %d %d %d",&qx[2],&qy[2],&qx[1],&qy[1]);//q

    px[0]=px[2];
    py[0]=py[1];
    px[3]=px[1];
    py[3]=py[2];
    qx[0]=qx[2];
    qy[0]=qy[1];
    qx[3]=qx[1];
    qy[3]=qy[2];

    /* for (int i = 0; i < 4; i++)
    {
        printf("%d %d \n",px[i],py[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d %d \n",qx[i],qy[i]);
    }
    printf("\n"); */

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (qx[i]>px[0] && qx[i]<px[1] && qy[i]>py[2] && qy[i]<py[0])//q의 한점이 p 안에 있는가?
            {
                face=1;
            }
            else if (qx[i]==px[3-i]&&qy[i]==py[3-i])
            {
                point=1;
            }
            else
            {
                line=1;
            }
            /* else if ((qx[i]>px[0]&&qx[i]<px[1])&&(qy[i]==py[0]||qy[i]==py[2]))
            {
                line=1;
            }
            else if ((qy[i]<py[0]&&qx[i]>py[2])&&(qx[i]==px[0]||qx[i]==px[1]))
            {
                line=1;
            }
            
            else if (px[i]==qx[j]&&py[i]==qy[j])//겹치는점이 있는가?
            {
                point=1;
            } */
        }
        
    }
    if (face==1)
    {
        printf("FACE");
    }
    else if (line==1)
    {
        printf("LINE");
    }
    else if (point==1)
    {
        printf("POINT");
    }
    else
    {
        printf("NULL");
    }
    
    
    

    return 0;
}