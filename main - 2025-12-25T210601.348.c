/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int array[5]={100,200,300,400,500};
    for(i=0;i<5;i++){
        printf("\ndizinin %d.elemani array[%d]=%d\n",i+1,i,array[i]);
        getchar();
    }

    return 0;
}