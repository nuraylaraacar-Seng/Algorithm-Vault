/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, f7=0,f8=0, f9=0, f10=0;
    
    printf("1-10 arasında 10 adaet sayi giriniz:\n");
    
    for(int i=0;i<10;i++){
        scanf("%d", &num);
        switch(num){
            case 1: f1++; break;
            case 2: f2++; break;
            case 3: f3++; break;
            case 4: f4++; break;
            case 5: f5++; break;
            case 6: f6++; break;
            case 7: f7++; break;
            case 8: f8++; break;
            case 9: f9++; break;
            case 10: f10++; break;
         }
    }
    if(f1) printf(" 1 sayisindan %d adet var\n", f1);
    if(f2) printf(" 2 sayisindan %d adet var\n", f2);
    if(f3) printf(" 3 sayisindan %d adet var\n", f3);
    if(f4) printf(" 4 sayisindan %d adet var\n", f4);
    if(f5) printf(" 5 sayisindan %d adet var\n", f5);
    if(f6) printf(" 6 sayisindan %d adet var\n", f6);
    if(f7) printf(" 7 sayisindan %d adet var\n", f7);
    if(f8) printf(" 8 sayisindan %d adet var\n", f8);
    if(f9) printf("9 sayisindan  %dadet var\n", f9);
    if(f10) printf("10 sayisindan %d adet var\n", f10);
    return 0;
}