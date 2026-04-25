/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int stringAyniMi(char str1[], char str2[]){
    
    if(strcmp(str1, str2)==0){
        return 1;
    }
    return 0; //farklı    
}

//Fonksiyon 2: Palindrom mu?
int palindromMu(char str[]){
    int bas=0;
    int son=strlen(str)-1;
    //küçük harfe çevirme
    for(int i=0; str[i]; i++){
     str[i]=tolower(str[i]);
    }
    while(bas<son){
      if(str[bas] != str[son]){
        return 0;
      }
    
    bas++;  
    son--;
    }
    return 1;//Palindrome
}

int main() {
    char str1[100], str2[100];
    
    printf("Birinci kelimeyi girin: ");
    scanf("%s", str1);  // veya gets(str1)
    
    printf("Ikinci kelimeyi girin: ");
    scanf("%s", str2);
    
    // 1. Test: İki string aynı mı?
    if(stringAyniMi(str1, str2)) {
        printf("\nIki string AYNIDIR.\n");
    } else {
        printf("\nIki string FARKLIDIR.\n");
    }
    
    // 2. Test: İlk string palindrom mu?
    if(palindromMu(str1)) {
        printf("'%s' bir PALINDROMDUR.\n", str1);
    } else {
        printf("'%s' PALINDROM DEGILDIR.\n", str1);
    }
    
    // 3. Test: İkinci string palindrom mu?
    if(palindromMu(str2)) {
        printf("'%s' bir PALINDROMDUR.\n", str2);
    } else {
        printf("'%s' PALINDROM DEGILDIR.\n", str2);
    }
    
    return 0;
}

/*
**ÇIKTI ÖRNEĞİ:**
Birinci kelimeyi girin: aba
Ikinci kelimeyi girin: aba

Iki string AYNIDIR.
'aba' bir PALINDROMDUR.
'aba' bir PALINDROMDUR.
*/