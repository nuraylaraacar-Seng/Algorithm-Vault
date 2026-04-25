/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}