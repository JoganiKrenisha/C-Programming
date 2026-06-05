
# include<stdio.h>
void main()
{
    int n;
    printf("Ener number :");
    scanf("%d",&n);
   int a=1;
   int b=1;
   int sum=1;
   for(int i=0; i<n-2; i++){

      sum=a+b;
      a=b;
      b=sum;

   }
   printf("The %dth fibonacci is %d",n,sum);



}
