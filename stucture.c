#include <stdio.h>

struct student
{
    char name[50];
    float marks;
    

};

int main()
{
    struct student sunny ={ "sunny ",92.45};
    printf("%s marks is %.2f\n",sunny.name,sunny.marks);

    return 0;
}