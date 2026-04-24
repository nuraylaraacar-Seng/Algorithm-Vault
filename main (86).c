/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
char str1[]="NUYAY ANNESİNİ";   
char str2[]="SEVİYOR";

if(strncmp(str1,str2,7)==0){
printf("İlk 7 karakter eşittir.\n");
}
else{
printf("Farklıdır.\n");
}
return 0;
}