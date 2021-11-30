#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, count = 0;
    int computernum;
    srand(time(NULL));
    printf("Enter the numbwr between 0 to ");
    scanf("%d", &n);
    printf("YOU HAVE A 10 CHANCE TO APPROCH THE ACTUAL NUMBER \n");
    printf("Geuss number between 0 to %d\n", n);
    computernum = rand() % n;

    do
    {
        scanf("%d", &m);
        
        if (computernum > m)
        {
            printf("Your number is smaller the the number \n");
            count++;
        }
        else if (computernum < m)
        {
            printf("Your number is grater than the actual number \n");
            count++;
        }
        else
        {
            printf("Conguratulation you approch the number which is %d\n", computernum);
            count++;
            printf("No of attemt is %d\n", count);
            break;
        }
    } while (rand() % n != m && count <10);
    printf("Actual number is %d\n",computernum);

    return 0;
}