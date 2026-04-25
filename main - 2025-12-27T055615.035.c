/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,maxnum;
    
    for(int i=1;i<=10;i++){
        printf("%d..sayiyi giriniz\n",i);
        scanf("%d",&num);
        if(maxnum<num){
            maxnum=num;
        }
    }
    printf("Max Number:%d",maxnum);
    return 0;
}