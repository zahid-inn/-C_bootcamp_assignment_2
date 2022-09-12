#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    a = a-b;
    b = b+a;
    a = b-a;

    printf("Swapped values are: %d %d",a,b);
    return 0;
}