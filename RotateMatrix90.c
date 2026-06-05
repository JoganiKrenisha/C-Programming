2
#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter the no. of rows: ");
    scanf("%d", &r);

    printf("Enter the no. of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter all the elements:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // TRANSPOSE
    for(int i = 0; i < r; i++){
        for(int j = i; j < c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // REVERSE EACH ROW
    for(int i = 0; i < r; i++){
        int j = 0;
        int k = c - 1;
        while(j < k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }

    // PRINT ROTATED MATRIX
    printf("Rotated Matrix:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
