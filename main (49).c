/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int elm;
int month[12];
int *ptr;
ptr=month;//month[0]olur ve ptr ye atamış olursun
elm=ptr[3];//elm=month[3]
ptr=month+3;//ptr month[3] işaret eder
ptr=&month[3];//yine ptr moth[3] işaret eder
elm=(ptr+2)[2];//bu (*ptr+4) bu moth[7] işarert eder
elm=*(month+3);//month[3]'ün değerini elm'e atar
ptr=month;//
elm=*(ptr+2);
elm=*(month+1);


    return 0;
}