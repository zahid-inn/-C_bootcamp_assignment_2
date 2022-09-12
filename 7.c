#include <stdio.h>

int main()
{
    int num, check, count = 1;

    printf("Enter a Number\n");
    scanf("%d", &num);

    check = num & 1;

    if (check == 1)
    {
        printf("Position of 1 in LSB is %d", count);
    }
    else
    {
        count++;
        num >> 1;
    }



    return 0;
}