/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int Javascript(const char *str1,const char *str2){
    
    while(*str1&&*str2&&*str1==*str2){
    str1++;
    str2++;
    }
return *str1-*str2;
}
int main(){
char str1[15],str2[15];
int ret;
//ascii ye göre değerler veriliyor atıyorum A 61 gibi str1 str2 çıkarılıyor yukarıda var
strcpy(str1,"abcdef");
strcpy(str2,"ABCDEF");

ret=Javascript(str1,str2);

if(ret<0){
printf("str1 is less than str2");
}
else if(ret>0){
printf("str2 is less than str1");
}
else{
printf("str1 is equal to str2");
}
return 0;
}
