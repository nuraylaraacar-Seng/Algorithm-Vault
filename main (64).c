/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void matrixMultiply(int *mat1,int *mat2,int *result,int rows1,int cols1,int cols2){
for(int i=0;i<rows1;i++){
    for(int j=0;j<cols2;j++){
     *(result+i*cols2+j)=0;
     for(int k=0;k<cols1;k++){
        *(result+i*cols2+j)+=(*(mat1+i*cols1+k)**(mat2+k*cols2+j));
        //result[i][j] += mat1[i][k] * mat2[k][j];

     }
   }
  }    
}
void displayMatrix(int *matrix,int rows,int cols){
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
    printf("%d ", *((matrix+i*cols)+j));
    }
    printf("\n");
}

}
int main(){
int mat1[2][3]={
{1,2,3},
{4,5,6}
};
int mat2[3][2]={
{7,8},
{9,10},
{11,12}
};
int result[2][2];
matrixMultiply((int*)mat1,(int*)mat2,(int*)result,2,3,2);
 printf("Sonuç matrisi:\n");
 displayMatrix((int*)result,2,2);
 return 0;
}