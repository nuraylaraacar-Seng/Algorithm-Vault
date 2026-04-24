/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
 char ingiliz_alfabesi[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 printf("%d",strlen(ingiliz_alfabesi));
 printf("\n...\n");
 printf("%d",sizeof(ingiliz_alfabesi));
 printf("\n..........\n");
 
 char turk_alfabesi[]="ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
 printf("%d",strlen(turk_alfabesi));
 printf("\n...\n");
 printf("%d",sizeof(turk_alfabesi));
 printf("\n.......\n");
 
 char deneme[50]="ABCDEFGHIJKLMNOPQRSTUVWYZ";
 printf("%d",strlen(deneme));
 printf("\n...\n");
 printf("%d",sizeof(deneme));

    return 0;
}
