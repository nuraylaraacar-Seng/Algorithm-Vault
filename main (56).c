/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int countVowels(char *str){
int count=0;
while(*str!='\0'){
char c=tolower(*str);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    count++;
}
str++;
} 
return count;
}
int main(){
char str[]="Merhaba Dunya!";
printf("Sesli harf sayısı:%d\n",countVowels(str));
    
    
}   
    
    
    
