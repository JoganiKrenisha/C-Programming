# include<stdio.h>
void main()
{
    int n,factorial=1;
    printf("Ener number :");
    scanf("%d",&n);

   for(int i=1; i<=n; i++){
    factorial=factorial*i;
   }
   printf("The factorial is :%d",factorial);



}

