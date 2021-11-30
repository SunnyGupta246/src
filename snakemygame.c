#include <stdio.h>
#include<conio.h>>
#include <stdlib.h>
int tailx[200], taily[200];
int x, y, posfrutx, posfruty, point, z;
int w = 30, h = 30, out;
int ct = 0;
void starting()
{
    out = 0;
    x = w / 2;
    y = h / 2;
wego1:
    posfrutx = rand() % 20;
    if (posfrutx == 0)
    {
        goto wego1;
    }
wego2:
    posfruty = rand() % 20;
    if (posfruty == 0)
    {
        goto wego2;
    }
    point = 0;
}
void input()
{
    if (kbhit())

    {
        switch (getch())
        {
        case 'a':
            z = 1;
            break;
        case 's':
            z = 2;
            break;
        case 'w':
            z = 3;
            break;
        case 'd':
            z = 4;
            break;
        case 'x':
            out = 1;
            break;

        default:
            break;
        }
    }
}
void process()
{
    int i;
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    tailx[0] = x;
    taily[0] = y;
    for (i = 1; i < ct; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    switch (z)
    {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        x--;
        break;
    case 4:
        y++;

    default:
        break;
    }
    if (x == 0 || x == w-1 || y == 0 || y == h-1)
    {
        out = 1;
    }
    for (i = 0; i < ct; i++)
    {
        if (x == tailx[i] && y == taily[i])
        {
            out = 1;
        }
    }

    if (x == posfrutx && y == posfruty)
    {
    wego3:
        posfrutx = rand() % 20;
        if (posfrutx == 0)
        {
            goto wego3;
        }
    wego4:
        posfruty = rand() % 20;
        if (posfruty == 0)
        {
            goto wego4;
        }
        point += 10;
        ct++;
    }
}
void boundary()
{
    int i, j, k;
    system("cls");
    for (i = 0; i < w; i++)
    {
        for (j = 0; j < h; j++)
        {
            if (i == 0 || i == h-1 || j == 0 || j == w-1 )
            {
                printf("#");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("O");
                }
                else if (i == posfrutx && j == posfruty)
                {
                    printf("F");
                }
                else
                {
                    int ch = 0;
                    for (k = 0; k < ct; k++)
                    {
                        if (i == tailx[k] && j == taily[k])
                        {
                            printf("o");
                            ch = 1;
                        }
                    }
                    if (ch == 0)

                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("point=%d\n",point);
}
int main()
{
    char c;
    wego5:
    starting();

    while (!out)
    {

        boundary();
        input();
        process();
    }
    int m;
    for ( m = 0; m < 100; m++)
    {
        for (int  n = 0; n < 1000; n++)
        {
            /* code */
        }
        
        
    }
    
    
    printf("\nfor continue a game press Y");
    scanf("%c",&c);
    if (c=='Y'||c=='y')
    {
        goto wego5;
    }
    
    return 0;
}