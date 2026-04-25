/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void matrisTranspoz(int matris[3][3], int transpoz[3][3]){
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        transpoz[j][i]=matris[i][j];
      }
    }
}


void yazdir(int mat[3][3]){
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         printf("%d ", mat[i][j]);
      }
      printf("\n");
    }
}
int main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpoz[3][3];
    
    printf("Orijinal Matris:\n");
    yazdir(matrix);
    
    matrisTranspoz(matrix, transpoz);
    
    printf("\nTranspoze Matris:\n");
    yazdir(transpoz);
    
    return 0;
}