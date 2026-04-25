/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fptr;

char karakter;
fptr=fopen("dosya1.txt","r");

if(fptr==NULL){
 printf("Dosya okunamadı.\n");
 printf("Dosyanın ilgili konumda olup olmadığını ve erişim yetkinizin olup olmadığını kontrol ediniz");
 exit(EXIT_FAILURE);
}
do{
   karakter=fgetc(fptr);
   
   putchar(karakter);
}while(karakter!=EOF); 
fclose(fptr);
return 0;
}
