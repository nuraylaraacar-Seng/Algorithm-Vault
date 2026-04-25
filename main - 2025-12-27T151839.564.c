/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int c1,c2,c3;
    int cub1,cub2,cub3,sum;
    
    printf("3 adet tam sayi giriniz: ");
    scanf("%d %d %d", &c1 , &c2, &c3);
    
    cub1=c1*c1*c1;
    cub2=c2*c2*c2;
    cub3=c3*c3*c3;
    
    sum=cub1+cub2+cub3;
    
    printf("Sayilarin kublerinin toplami: %d\n", sum);
    return 0;
}