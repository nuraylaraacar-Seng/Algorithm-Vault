/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
char *Python(char *str1,const char *str2){
  char *p=str1;
  while(*p){
     p++;
  }
  while(*str2){
     *p++=*str2++;
  }
 *p='\0';
 
 return str1;
}

int main(){
    char str3[50],str4[50];
    
    
    strcpy(str3,"ALGORİTMA");
    
    strcpy(str4,"DATA STRUCTURES");
    
    Python(str4,str3);
    
    printf("Final destination string:|%s|\n",str4);
    
    return 0;
}