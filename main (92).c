/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
char str[]="Nuray Lara Açar";
char *pos=strchr(str,'a');


if(pos!=NULL){
printf("İlk geçen a karakteri:%s\n",pos);
}
else{
printf("Karakter bulunamadı.\n");
}
return 0;
}