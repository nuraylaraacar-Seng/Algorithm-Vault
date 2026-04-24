/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void square(int *n){
*n=(*n)*(*n);   
}
int main(){
int num=4;
square(&num);
printf("Karesi:%d\n",num);//çıktı:16
return 0;
}