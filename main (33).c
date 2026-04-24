/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void factor(int n){
if(n<0){
printf("HATALI DEĞER GİRDİNİZ");
return;
}
unsigned long long fact=1;
for(int i=1;i<=n;i++){
fact *=i;
}
printf("%d sayısının faktöriyeli:%llu",n,fact);
}
int main(){
int sayi;
printf("Lütfen bir sayı giriniz:");
scanf("%d",&sayi);
factor(sayi);
}