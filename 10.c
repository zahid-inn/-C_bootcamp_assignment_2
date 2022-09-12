#include <stdio.h>

int main()
{
    int num;

    printf("Enter number\n");
    scanf("%d", &num);

    num=num/10;
    num=num*10;

    printf("Ans is: \n%d", num);
    return 0;
}