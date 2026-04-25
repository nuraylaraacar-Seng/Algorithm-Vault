/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void convert2Dto1D(int matrix[3][3], int oneDArray[]){
   int k=0; 
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        oneDArray[k++]=matrix[i][j];
      }
    }
}
int main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int oneDArray[9];
    
    convert2Dto1D(matrix, oneDArray);
    
    printf("One-Dimensional Array: ");
    for(int i=0;i<9;i++){
     printf("%d ", oneDArray[i]);
    }

    return 0;
}