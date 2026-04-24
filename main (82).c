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
char str[]="Merhaba Dünya!";
char dest[20];
strncpy(dest,str,7);
dest[7]='\0';
//strncpy eklemediğinden NULLL karakter eklenir
printf("Kopyalanan string:%s\n",dest);
return 0;
}