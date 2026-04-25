/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int simetrikMi(int mat[3][3]){
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(mat[i][j]!=mat[j][i]) return 0;
      }
    }
    
    
    return 1;
}
int main()
{
    int matrix[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    int result=simetrikMi(matrix);
    printf("Simterik matristir:%d\n ",result);
    return 0;
}