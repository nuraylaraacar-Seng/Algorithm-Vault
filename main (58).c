/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
void stringCopy(char *dest,const char *src){
    while(*src!='\0'){
    *dest=*src;
    dest++; 
    src++;
    }
    *dest='\0';
}
int main(){
char str1[20];    
char str2[]="Hello";
stringCopy(str1,str2);
printf("Kopyalanmış cümle:%s\n",str1);
return 0;    
}