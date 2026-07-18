#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P, R, T, SI;

    printf("Enter Principle");
    scanf("%i", &P);

    printf("Enter Rate");
    scanf("%i", &R);

    printf("Enter Time");
    scanf("%i", &T);

    SI = (P * R * T)/100;

    printf("Simple Interest is ");
    printf("%i", SI);

    return 0;
}
