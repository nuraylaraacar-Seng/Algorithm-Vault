/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i=10;
int*iptr;
iptr=&i;
printf("i adresi %p\n",&i);
printf("iptr değeri %p\n",iptr);

printf("i adresi %d\n",&i);
printf("iptr değeri %d",iptr);


    return 0;
}