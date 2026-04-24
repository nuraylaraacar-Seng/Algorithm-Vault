/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char karakter='C';
int tamsayi=1;
float gercel_sayi=10.4f;
long long buyuk_tamsayi=989898989ll;

printf("karakter değişkenin değeri=%c,karakter değişkenin adresi=%u\n",karakter,&karakter);
printf("tamsayi değişkenin değeri=%d,tamsayi değişkenin adresi=%u\n",tamsayi,&tamsayi);
printf("gercel_sayi değişkeninin değeri=%f,gercel_sayi değişkeninin adresi=%u\n",gercel_sayi,&gercel_sayi);
printf("buyuk_tamsayi değişkeninin değeri=%llf,buyuk_tamsayi değişkeninin adresi=%u",buyuk_tamsayi,&buyuk_tamsayi);
return 0;
}