# include<stdio.h>
void main(){
  int r,c;
  printf("Enter the no of rows :");
  scanf("%d",&r);

   printf("\nEnter the no of columns :");
  scanf("%d",&c);

  int  arr[r][c];
  printf("\nEnter the element of Matrx:\n");
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d",&arr[i][j]);
    }
  }

  //Wave print
   printf("\n");
   for(int i=0; i<r; i++){
        if(i%2==0){
             for(int j=0; j<c; j++){
        printf("%d ",arr[i][j]);
             }
    } else{
    for(int j=c-1; j>=0; j--){
        printf("%d ",arr[i][j]);
    }


   }
    printf("\n");
   }
}
