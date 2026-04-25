/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("Dizi boyutu: ");
    scanf("%d", &n);
    
    int dizi[n];
    
    printf("%d adet sayi girin:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d", &dizi[i]);
    }
    
    printf("\nTekrar Eden Sayilar: ");
    int bulundu=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(dizi[i]==dizi[j]){
                int yazdırıldı=0;
                for(int k=0;k<i;k++){
                    if(dizi[k]==dizi[i]){
                        yazdırıldı=1;
                        break;
                    }
                }
                if(!yazdırıldı){
                   printf("%d ", dizi[i]);
                   bulundu=1;
                }
                break;
            }    
        }
    }
    if(!bulundu){
        printf("Tekrar eden eleamn yok!");
    }
    printf("\n");
    
    return 0;
}