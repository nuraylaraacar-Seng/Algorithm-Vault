#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fptr;

int karakter;
fptr=fopen("dosya1.txt","r");

if(fptr==NULL){
 printf("Dosya okunamadı.\n");
 printf("Dosyanın ilgili konumda olup olmadığını ve erişim yetkinizin olup olmadığını kontrol ediniz");
 exit(EXIT_FAILURE);
}
do{
   karakter=fgetc(fptr);
   
   putchar(karakter);
}while(karakter!=EOF); 
fclose(fptr);
return 0;
}
