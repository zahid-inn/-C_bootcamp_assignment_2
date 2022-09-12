#include <stdio.h>

int main()
{
    int a;

    printf("Enter an Integer\n");
    scanf("%d", &a);

    printf("Your number's last digit is: %d", a%10);
    return 0;
}