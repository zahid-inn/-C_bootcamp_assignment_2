#include <stdio.h>

int main()
{
    int num, f, m, l, t;

    printf("Enter three digit number\n");
    scanf("%d", &num);

    t = num % 100;
    f = num / 100;
    m = t / 10;
    l = t % 10;

    num *= 10;
    num += l;
    num *= 10;
    num += f;
    num *= 10;
    num += m;

    num %= 1000;

    printf("Rotated 3 digits are: %d", num);

    return 0;
}