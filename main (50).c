/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i[10];
int *ptr;
for(int j=0;j<10;j++){
i[j]=j;
}
ptr=i;
for(int j=0;j<10;j++){
    printf("%d",*ptr);
    ptr++;
}
printf("\n%d\n",*(ptr-1));// son elemanı yazdırır
ptr=i;
for(int j=0;j<10;j++){
    printf("%d",*(ptr+j));
}
printf("\n%d\n",*ptr);    
    
}
