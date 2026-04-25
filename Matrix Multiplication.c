/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define ROW_A 2
#define COL_A 3
#define ROW_B 3
#define COL_B 2
void MatrisCarpimi(int A[ROW_A][COL_A],int B[ROW_B][COL_B], int C[ROW_A][COL_B]){
    for(int i=0;i<ROW_A;i++){
        for(int j=0;j<COL_B;j++){
            C[i][j]=0;
            for(int k=0;k<COL_A;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}
int main()
{
    int A[ROW_A][COL_A]={{1,2,3},{4,5,6}};
    int B[ROW_B][COL_B]={{7,8},{9,10},{11,12}};
    int C[ROW_A][COL_B];
    
    MatrisCarpimi(A, B, C);
    
    printf("Matrsi C(AxB) sonucu:\n");
    for(int i=0;i<ROW_A;i++){
        for(int j=0;j<COL_B;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}