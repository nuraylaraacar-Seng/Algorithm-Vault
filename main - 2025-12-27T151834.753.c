/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1,n2,n3,maxNum;
    
    printf("Lutfen 3 ate sayi giriniz: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    maxNum=n1;
    
    if(n2>maxNum){
        maxNum=n2;
    }
    if(n3>maxNum){
        maxNum=n3;
    }
    
    printf("Girilen en buyuk sayi:%d\n", maxNum);
    
    return 0;
}