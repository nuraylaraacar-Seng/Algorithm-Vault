/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int toplam(int n){
if(n==1){
return n;
}
return(n+toplam(n-1));

    
    
}
int main()
{
int sayi=10;
printf("sonuc=%d\n",toplam(sayi));


    return 0;
}