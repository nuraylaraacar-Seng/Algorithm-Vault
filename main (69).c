/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void increment(int*);
int main(void){
int i;
i=5;
printf("oncesi:%d\n",i);
increment(&i);
printf("sonrasi:%d\n",i);
getchar();
    
return 0;    
}
void increment(int *k){
(*k)++;
}