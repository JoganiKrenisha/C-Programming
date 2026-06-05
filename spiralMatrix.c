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

  //Spiral print
  printf("\n");
  int minr = 0;
  int maxr = r-1;
  int minc = 0;
  int maxc = c-1;
  int tne = r*c;
  int count = 0;
  while(count<tne) {
        //print min row
        for(int j=minc; j<=maxc; j++){
            printf("%d",arr[minr][j]);
            count++;
        }
        minr++;
        // print max column
        for(int i =minr; i<=maxr; i++){
            printf("%d",arr[i][maxc]);
             count++;
        }
        maxc--;
        //print max row
        for(int j=maxc;j>=minc;j--){
            printf("%d",arr[maxr][j]);
             count++;
        }
        maxr--;
        //print min column
        for(int i=maxr;i>=minr;i--){
            printf("%d",arr[i][minc]);
             count++;
        }
        minc++;

  }

}

