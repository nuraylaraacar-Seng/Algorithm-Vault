/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int sayi1,sayi2,toplam;
int *isaretci1,*isaretci2;
isaretci1=&sayi1;
isaretci2=&sayi2;
printf("iki sayı giriniz: ");
scanf("%d%d",isaretci1,isaretci2);
toplam=*isaretci1+*isaretci2;
return 0;
}
