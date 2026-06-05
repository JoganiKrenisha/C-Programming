#include<stdio.h>

void main()
{
    int a[20], n, i, j, swap;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements in array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

        for(i=0; i< n-1; i++)
           {
               for(j=0; j< n-1-i; j++)
               {
                   if(a[j] > a[j+1])
                   {
                       swap=a[j];
                       a[j]=a[j+1];
                       a[j+1]=swap;
                   }
               }
           }
           printf("\nSorted list in ascending order:\n");
           for (i=0; i < n; i++)
           {
               printf("%d\n", a[i]);
           }
    }

