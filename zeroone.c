# include<stdio.h>
void main()
{
    int r,c;

    printf("Enter no of rows :");
    scanf("%d", &r);

    printf("Enter no of columns :");
    scanf("%d", &c);
    printf("Enter All the elements\n :");
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int maxCount = 0;
    for(int i=0; i<r; i++){
            int count = 0;
        for(int j=0; j<c; j++){
           if(arr[i][j]==1) count++;
        }
    if(maxCount<count){
        maxCount = count;
    }
     printf("\n");

    }

    printf("%d", maxCount);



}
