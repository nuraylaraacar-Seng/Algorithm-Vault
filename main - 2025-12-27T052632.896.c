/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sum=0;
    float num,avg;
    for(int i=1;i<6;i++){
        printf("%d.Sayiyi giriniz\n",i);
        scanf("%f",&num);
        sum+=num;
    }
    avg=sum/5;
    printf("Avearage=%.2f",avg);
    return 0;
}