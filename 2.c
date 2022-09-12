#include <stdio.h>

int main()
{
    int a;

    printf("Enter an Integer\n");
    scanf("%d", &a);

    printf("Your number's without last digit are: %d", a/10);
    return 0;
}