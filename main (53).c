/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
  int x=5,y=10;
  printf("Değiştirmeden önce:x=%d,y=%d\n",x,y);
  swap(&x,&y);
  printf("Değiştirmeden sonra:x=%d,y=%d\n",x,y);
return 0;
}