#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Enter number\n");
    scanf("%d", &a);

    printf("Enter one digit\n");
    scanf("%d", &b);

    a*=10;
    x=a+b;

    printf("Combined number is: %d",x);
    return 0;
}