/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int score[4][4];
    int i,j;
    
    srand(time(NULL));
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            score[i][j]=rand()%101;
        }
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t", score[i][j]);
        }
        printf("\n");
    }
    return 0;
}