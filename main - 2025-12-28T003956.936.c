/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int ikiliara(int dizi[], int sol, int sag, int aranan){
    if(sag>=sol)
    {
        int orta=sol+(sag-sol)/2;
        
        if(dizi[orta]=aranan){
            return orta;
        }
        if(dizi[orta]>aranan){
            return ikiliara(dizi, sol, orta-1, aranan);
        }
        
        return ikiliara(dizi, orta+1, sag, aranan);
        
    }
    
   return -1; 
}
int main()
{
    int dizi[100], n,i,j,temp, aranan, sonuc;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    printf("%d adet eleman giriniz: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }
     //bublae sort
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            temp=dizi[j];
            dizi[j]=dizi[j+1];
            dizi[j+1]=temp;
        }
    }
    printf("Aranan elemani giriniz: ");
    scanf("%d", &aranan);
    
    sonuc=ikiliara(dizi, 0, n-1, aranan);
    
    if(sonuc!=-1)
     printf("Eleman %d.indekste bulundu.\n", sonuc);
    else
    printf("Eleman bulunamadi.\n");
    return 0;
}