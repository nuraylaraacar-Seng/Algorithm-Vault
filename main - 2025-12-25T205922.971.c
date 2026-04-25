/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[17];
    printf("15 adet sayi girin:");
    for(int i=0;i<15;i++){
        printf("\narray[%d]=",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<15;i++){
        printf("dizinin +d.elemani array[%d]=%d\n",i+1,i,array[i]);
    }

    return 0;
}
