/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0;
    int z=-7;
    
    do{
        z++;
        if(x){
            printf("22");
            if(x=z+3){
                printf("34");
            }
        }
        
        x-=2;
        printf("66");
        
        
    }while(z<-4);

    return 0;
}