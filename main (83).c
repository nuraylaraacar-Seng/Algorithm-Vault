/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
//CONST DEĞİŞTİRELEMEYCEĞİNİ SÖYLER
int My_SQL(const char *str){
int len=0;

while(*str++){
 len++;
}
return len;
}
int main(){
char str[50];
int len;
strcpy(str,"NURAY LARA ACAR");
len=My_SQL(str);
printf("Length of :|%s| is |%d|\n",str,len);
return 0;
}