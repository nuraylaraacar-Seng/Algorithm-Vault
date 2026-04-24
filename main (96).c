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
char text[]="C proglamlama dilinde string işlemleri örnek";
char *search="string";

char *pos=strstr(text,search);
if(pos!=NULL){
printf("Alt dize bulundu:%s\n",pos);
}
else{
printf("Alt dize bulunamadı.\n");
}

    return 0;
}