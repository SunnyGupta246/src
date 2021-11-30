#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int width = 20, hight = 20, out;
int x, y, fruitx, fruity, score, flag;
void setup()
{
    out = 0;
    x = width / 2;
    y = hight / 2;
label1:
    fruitx = rand() % 20;
    if (fruitx == 0)
    {
        goto label1;
    }
label2:
    fruity = rand() % 20;
    if (fruity == 0)
    {
        goto label2;
    }
    score = 0;
}
void input()
{
    if (kbhit())
        ;
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 'd':
            flag = 4;
            break;
        case 'x':
            out = 1;
            break;

        default:
            break;
        }
    }
}
void makelogic()
{
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        x--;
    case 4:
        y++;
    default:
        break;
    }
}
void draw()
{
    int i, j;
    system("cls");
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < hight; j++)
        {
            if (i == 0 || i == hight - 1 || j == 0 || j == width - 1)
            {
                printf("*");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("o");
                }
                else if (i == fruitx && j == fruity)
                {
                    printf("F");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
int main()
{
    setup();

    while (1)
    {

        draw();
        input();
        makelogic();
    }
    return 0;
}