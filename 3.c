#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Enter two Integers\n");
    scanf("%d %d", &a, &b);

    x=a, a=b, b=x;

    printf("The swapped values are: %d and %d",a, b);
    return 0;
}