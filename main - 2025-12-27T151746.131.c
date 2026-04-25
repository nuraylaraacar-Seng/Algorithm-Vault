/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num1,num2,ebob,ekok, minNum, i;
   
   printf("Ikı adet sayi giriniz: ");
   scanf("%d %d", &num1, &num2);
   
   minNum=(num1<num2)? num1:num2;
   
   for(i=1;i<=minNum;i++){
       if(num1%i==0&&num2%i==0){
           ebob=i;
       }
   }
   ekok=(num1*num2)/ebob;
   
   printf("EBOB(%d, %d)=%d\n", num1, num2, ebob);
   printf("EKOK(%d, %d)=%d\n", num1, num2, ekok);
   
   return 0;
}