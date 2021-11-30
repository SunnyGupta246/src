#include <stdio.h>
struct person
{
    int age;
    float weight;
};

int main()
{
    struct person *sunnyptr,sunny;
    sunnyptr=&sunny;
    printf("Enter age\n");
    scanf("%d",&(*sunnyptr).age);

    printf("%d\n",sunny.age);

    
    return 0;
}