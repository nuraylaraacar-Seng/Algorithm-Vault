#include <stdio.h>
#include <stdlib.h>
int SayiAsalMi(int sayi);

int main(){
    int sayi;
    
    printf("Bir sayı giriniz:");
    scanf("%d",&sayi);
    
    if(SayiAsalMi(sayi)){
     printf("%d bir asal sayıdır.\n",sayi);  
    }
    else
    {
    printf("%d bir asal sayı değildir.\n",sayi);
    }
return 0;
}
int SayiAsalMi(int sayi){
for(int i=2;i<=sayi/2;i++){
if(sayi%i==0){
    return 0;
}
else{
return 1;
}
}

}

