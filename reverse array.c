# include<stdio.h>
void main()
{
    int i,n;
    int array[30];

    printf("\nEnter the number of elelment for array :");
    scanf("%d",&n);

    printf("\nEnter the elements for the array..\n");
    for(i=0;i<n;i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("\nReverse array:");
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d", array[i]);
    }

}
