/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int sum=0;
   
   for(int i=1;i<=100;i++){
       if(i%3==0&&i%5==0){
           sum+=i;
       }
   }
     printf("1 ile 1000 arasinda hem 3 hem 5 ile bolunebilen sayilarin toplami: %d\n", sum);
    return 0;
}