
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the no. of raws:");
    scanf("%d",&r);
    printf("Enter the no. of columns:");
     scanf("%d",&c);
    printf("Enter all the elements\n");
      int arr[r][c];
     for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){

             scanf("%d",&arr[i][j]);
         }
     }
     for(int i=0; i<r && i<c; i++){
        for(int j=i; j<r && j<c; j++){
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
     }

      for(int i=0; i<r && i<c; i++){
        for(int j=0; j<r && j<c; j++){
          printf("%d",arr[i][j]);
        }
          printf("\n");


     }



              return 0;
     }




