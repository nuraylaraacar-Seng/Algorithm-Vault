#include <stdio.h>
#include <stdlib.h>
int main(){
int num,ters=0,orijinal,kalan;
printf("5 basamaklı bir sayı giriniz: ");
scanf("%d",&num);
 
 orijinal=num;
 while(num!=0){
    kalan=num%10;
    ters=ters*10+kalan;
    num /=10;
 }
 if(orijinal==ters){
printf("Girilen sayı bir palindromdur.\n");
 }   
else{
printf("Girilen sayı bir palindrom değildir.\n");
}    
return 0;
}