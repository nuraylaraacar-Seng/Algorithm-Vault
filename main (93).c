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
char src[]="Bu örnek bir uzun dizidir";
char dest[15];

strncpy(dest,src,10);
dest[10]='\0';//NULL karakteri eklemek

printf("Kopyalanan dize:%s\n",dest);



    return 0;
}