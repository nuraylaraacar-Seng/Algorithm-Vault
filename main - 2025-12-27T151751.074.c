/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num,ısPrime,i;
   
   printf("1-100 Arasındaki Asal Sayiliar:\n");
   
   for(num=2;num<=100;num++){
       ısPrime=1;
       
       for(i=2;i<=num/2;i++){
           if(num%i==0){
               ısPrime=0;
               break;
           }
       }
       if(ısPrime==1){
           printf("%d ", num);
       }
   }
   printf("\n");

    return 0;
}