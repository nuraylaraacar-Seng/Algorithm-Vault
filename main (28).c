/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void numbercheck(int num){
if(num%2==0){
printf("sayı çift sayıdır.");
}
else{
printf("sayı tek sayıdır");
}
}
int main()
{
 int number;
 printf("Lütfen bir sayı giriniz:");
 scanf("%d",&number);
 numbercheck(number);

    return 0;
}