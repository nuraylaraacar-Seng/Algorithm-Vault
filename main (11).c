/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int SayiMukemmelMi(int sayi){
    
int i,toplam,n;    
toplam=0;
n=sayi;
for(i=1;i<n;i++){
    if(n%i==0)
    {
     toplam +=i;
    }
}
return (sayi==toplam);    
}
int main(){
int sayi;
 printf("Bir sayı giriniz: ");
 scanf("%d",&sayi);
 if(SayiMukemmelMi(sayi)){
    printf("%d mukkemel bir sayıdır",sayi);
 }
 else{
    printf("%d mukkemel bir sayı değildir",sayi);
 }
 return 0;
}
