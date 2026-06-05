
#include <stdio.h>

void main()
{
    int a[25], i, neg=0, pos=0, eve=0, odd=0;

    printf("\nEnter 25 elements :");

    for(i=0; i<25; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<25; i++)
    {
        if(a[i] >= 0)
            pos++;
        else
            neg++;

        if(a[i] % 2 == 0)
            eve++;
        else
            odd++;
    }

    printf("\nPositive : %d", pos);
    printf("\nNegative : %d", neg);
    printf("\nEven     : %d", eve);
    printf("\nOdd      : %d", odd);
}
o
