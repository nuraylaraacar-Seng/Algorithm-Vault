/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sum=0;
    for(int i=46;i<=125;i+=2){
        sum+=i;
        printf("Total=%d\n",sum);
    }

    return 0;
}