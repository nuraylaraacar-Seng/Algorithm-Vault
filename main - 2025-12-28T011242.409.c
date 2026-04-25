/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cumle[500];
    int i,uzunluk;
    
    printf("Bir cumle yazin ");
    fgets(cumle, 500, stdin);
    
    uzunluk=strlen(cumle);
    for(i=0;i<uzunluk;i++){
        if(i==0||isspace(cumle[i-1])){
            cumle[i]=toupper(cumle[i]);
        }
        else
        {
        cumle[i]=tolower(cumle[i]);    
        }
    }
    
    printf("\nMetnin duzeltilmis hali: %s\n", cumle);
    return 0;
}