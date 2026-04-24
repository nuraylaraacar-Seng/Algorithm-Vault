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
int secimGir(void);
void textDosya(FILE*);
void kayitGuncelle(FILE*);
void yeniKayit(FILE*);
void kayitSil(FILE*);
void listele(FILE*);
int main(){
FILE* Myptr;
int secim;
if((Myptr=fopen("musteri.data","r+"))==NULL){
printf("Dosya Acilamdi!");
}
else{
while((secim=secimGir())!=6){
switch(secim){
case 1:textDosya(Myptr); break;    
case 2:kayitGuncelle(Myptr); break;   
case 3: yeniKayit(Myptr);  break; 
case 4: kayitSil(Myptr);   break;
case 5: listele(Myptr);   break;
}    
    
}   
fclose(Myptr);    
 }
}
int secimGir()
{
int menuSecim;   
printf("\nSecimini yap:\n");    
printf("1 - musteri.data dosyasını yaz\n");
printf("2 - Hesap guncelle\n");
printf("3 - Yeni hesap ekle\n");
printf("4 - Hesap sil\n");
printf("5 - musteri.dat dosyasını listele\n");
printf("6 - Cikis\n");
scanf("%d",&menuSecim);
return menuSecim;
}
void textDosya(FILE* okuptr){
FILE* yazptr;    
struct musteri hesapBilgi={0,"","",0.0};    
if((yazptr=fopen("musteri.txt","w"))==NULL){
printf("Dosya acilamadi!");
}    
else{
rewind(okuptr);
fprintf(yazptr,"%-10s%-16s%-11s%10s\n","hesapNo","soyad","ad","bakiye");
}    
while(!feof(okuptr))
{
fread(&hesapBilgi,sizeof(struct musteri),1,okuptr);
if(hesapBilgi.hesapNo!=0){
fprintf(yazptr,"%-10d%-16s%-11s%10.2f\n",hesapBilgi.hesapNo,hesapBilgi.soyad,
hesapBilgi.ad,hesapBilgi.bakiye);

}

}
fclose(yazptr);    
}
void kayitGuncelle(FILE* fptr){
int hesapID;    
double islemMiktari;    
struct musteri hesapBilgi={0,"","",0.0};    
printf("Guncellemek hesap no gir[1-100]:");    
scanf("%d",&hesapID);    
fseek(fptr,(hesapID-1)*(sizeof(struct musteri)),SEEK_SET);
fread(&hesapBilgi,sizeof(struct musteri),1,fptr);
if(hesapBilgi.hesapNo==0){
printf("%d nolu hesap için bilgi girilmemiş\n",hesapID);
}
else{
printf("%-10d%-16s%-11s%10.2f\n\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);    
printf("Hesaba yatacak(+) veya hesaptan cekilecek(-) tutari gir:");   
scanf("%lf",&islemMiktari);   
hesapBilgi.bakiye+=islemMiktari;
printf("%-10d%-16s%-11s%10.2f\n\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);    
fseek(fptr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
fwrite(&hesapBilgi,sizeof(struct musteri),1,fptr);
}
}
void kayitSil(FILE* fPtr){
struct musteri hesapBilgi,bosHesap={0,"","",0.0};
int hesapID;
printf("Silinecek hesap no gir[1-100]:");
scanf("%d",&hesapID);
fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
fread(&hesapBilgi,sizeof(struct musteri),1,fPtr);
if(hesapBilgi.hesapNo==0){
printf("Silinecek %d nolu hesap yok",hesapID);
}
else{
fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
fwrite(&bosHesap,sizeof(struct musteri),1,fPtr);
}
}
void yeniKayit(FILE* fptr){
int hesapID;   
struct musteri hesapBilgi={0,"","",0.0};    
printf("Yeni hesap no gir[1-100]:");    
scanf("%d",&hesapID);
fseek(fptr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
fread(&hesapBilgi,sizeof(struct musteri),1,fptr);
if(hesapBilgi.hesapNo!=0){
printf("%d nolu hesap no zaten mevcut\n",hesapID);
}
else{
printf("Soyad,Ad ve Bakiye gir:");
scanf("%s%s%lf",hesapBilgi.soyad,hesapBilgi.ad,&hesapBilgi.bakiye);
hesapBilgi.hesapNo=hesapID;   
fseek(fptr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);    
fwrite(&hesapBilgi,sizeof(struct musteri),1,fptr);    
 }
}
void listele(FILE* fptr){
struct musteri hesapBilgi={0,"","",0.0};

printf("%-10s%-16s%-11s%10s\n","hesapNo","soyad","ad","bakiye");
while(!feof(fptr)){
fread(&hesapBilgi,sizeof(struct musteri),1,fptr);
if(hesapBilgi.hesapNo!=0){
printf("%-10d%-16s%-11s%10.2f\n", hesapBilgi.hesapNo, hesapBilgi.soyad, hesapBilgi.ad, hesapBilgi.bakiye);
}
}
getchar();
}





