/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


struct musteri{
int hesapNo;    
char soyad[50];    
char ad[50];    
double bakiye;    
};
int main(){
struct musteri hesapBilgi={0,"","",0.0};
FILE* Myptr;
if((Myptr=fopen("musteri.dat","r"))==NULL){
printf("Dosya Acilamadi\n");
}    
else{
 //-10s gibi ifaadeler eksiyi gördüğün zaman aslında 10 brim sola kaydırma gibi düşün
printf("%-10s%-16s%-11s%10s\n","hesapNo","hesapsoyad","hesapad","hesapbakiye");    
 while(!feof(Myptr)){
    fread(&hesapBilgi,sizeof(struct musteri),1,Myptr); 
    if(hesapBilgi.hesapNo!=0)
    printf("%-10d%-16s%-11s%10.2f",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye); 
 }   
    fclose(Myptr);
    
    
    
}    
    
    
    
    
    
    
    
    
    
 return 0;   
}










