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
char str1[30]="Merhaba, ";
char str2[]="dünya!";

if(strlen(str1)+strlen(str2)<sizeof(str1)){
strcat(str1,str2);
printf("Birleştirilmiş dize:%s\n",str1);
}
else{
printf("Birleştirilen die hedef boyutu aşıyor.\n");
}


    return 0;
}