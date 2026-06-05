# include<stdio.h>
int main()
{
    int m,n;
    printf("Enter no. of raws :");
    scanf("%d", &m);
     printf("Enter no. of columns  :");
    scanf("%d", &n);

    printf("Enter element of matrix 1:\n");

    int a[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);

        }
    }
    printf("\n");

     int p,q;
    printf("Enter no. of raws :");
    scanf("%d", &p);
     printf("Enter no. of columns :");
    scanf("%d", &q);

    printf("Enter element of matrix 2:\n");

    int b[p][q];

    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d", &b[i][j]);

        }
    }

    if(n != p){
        printf("The matrix cann't be multiplied");
    }
    else{
        int res[m][q];

        int row_col=p=n;

        for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j]=0;
            for(int k=0; k<row_col; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }


        for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
        printf("%d ", res[i][j]);
        }
        printf("\n");
        }
    return 0;
}
}
