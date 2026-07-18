#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, temp;

    printf("Enter first number 1: ");
    scanf("%d", &num1);

    printf("Enter second number 2: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
