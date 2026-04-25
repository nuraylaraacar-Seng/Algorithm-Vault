/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

long long exCalculator(int base, int ex){
    long long result=1;
    int i;
    for(i=0;i<ex;i++){
        result *=base;
    }
    return result;
}
int main()
{
    int taban, us;
    long long sonuc;
    
    printf("tanban deerini giriniz: ");
    scanf("%d", &taban);
    printf("Us degerini giriniz: ");
    scanf("%d", &us);
    
    sonuc=exCalculator(taban, us);
    
    printf("%d^%d=%lld", taban, us, sonuc);
    
    return 0;
}