/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int satir,sutun;

printf("Matris boyutunu girin (satir sutun): ");
scanf("%d %d", &satir, &sutun);

int matris[satir][sutun], transpoz[sutun][satir];  

printf("Matris elemnlarini girin:\n");
for(int i=0;i<satir;i++){
  for(int j=0;j<sutun;j++){
     printf("[%d][%d]: ",i, j);
     scanf("%d", &matris[i][j]);
  }
}


for(int i=0;i<satir;i++){
 for(int j=0;j<sutun;j++){
    transpoz[j][i]=matris[i][j];
 }
}

printf("\n Orijinal Matris:\n");
for(int i=0;i<satir;i++){
 for(int j=0;j<sutun;j++){
    printf("%d ",matris[i][j]); 
 }
 printf("\n");
}

printf("\nTranspoze Matris:\n");
for(int i=0;i<sutun;i++){
    for(int j=0;j<satir; j++){
        printf("%d ", transpoz[i][j]);
    }
    printf("\n");
}
 return 0;
}
