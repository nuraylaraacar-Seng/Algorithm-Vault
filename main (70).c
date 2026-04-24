/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int bolme_islemi(int,int,int*);
int main(void)
{
    int bolunen,bolen;    
    int bolum,kalan;
    bolunen=13;
    bolen=4;
    bolum=bolme_islemi(bolunen,bolen,&kalan);
    printf("Bolum:%d kalan:%d\n",bolum,kalan);
    getchar();
    return 0;
}

int bolme_islemi(int bolunen,int bolen,int *kalan){
*kalan=bolunen%bolen;
return bolunen/bolen;
}