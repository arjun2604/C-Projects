#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Marks;

    printf("Enter a number");
    scanf("%d", &Marks);

    if(Marks >= 40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
