/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
const char *text="C proglama dilini öğreniyorumm";
const char *search="dil";
char *result=strstr(text,search);
if(result !=NULL){
printf("'%s' ifadesi bulundu:%s\n",search,result);
}   
else{
printf("İfade bulunamadı.\n");
}
    
return 0;    
}