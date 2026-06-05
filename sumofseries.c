# include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Ener number :");
    scanf("%d",&n);

   for(int i=0; i<=n; i++){
        if(i%2!=0) sum=sum +i;
        else sum=sum-i;
   }
   printf("The sum is :%d",sum);



}
