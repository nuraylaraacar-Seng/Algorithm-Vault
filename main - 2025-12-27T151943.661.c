/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    float ahmet,hasan;
     printf("ahmetin maasini giriniz \n");
    scanf("%f",&ahmet);
    printf("hasanin maasini giriniz \n");
        scanf("%f",&hasan);
         for(i=1; i<=12; i++)
         {
             hasan=hasan+hasan*0.5;
            if(i%2!=0)
                ahmet=ahmet+ahmet*0.5;
         else
                ahmet=ahmet-ahmet*0.25;
        printf("%d ay sonunda ahmet'in mamasi=%.2f -- hasana nin maasi %.2f\n",i,ahmet,hasan);
         }
    return 0;
}