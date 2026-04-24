/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char *a="1234567890";
char x[10];
char *p1,*p2;
printf("%s\n",a);
p1=a;
p2=x;
while(*p1!='\0'){
    *p2=*p1;
    p1++;
    p2++;
}
*p2=*p1;
printf("%s\n",x);
    return 0;
}