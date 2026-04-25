/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i;
int *ptr;
i=5;
ptr=&i;
printf("i adresi:%p\n",&i);
printf("iptr degeri:%p\n",ptr);

printf("i degeri:%d\n",i);
printf("*iptr degeri :%d\n",*ptr);
getchar();
return 0;
}