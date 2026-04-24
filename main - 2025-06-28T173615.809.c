/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct books{
char* bookname;
char* writer;
int page;   
int year;    
};
int main(){
struct books x;
struct books* y;
y=&x;
(*y).bookname="Atmoik Alışkanlıklar";    
(*y).writer="James Clear";    
(*y).page=80;    
(*y).year=2022;    
printf("Book Name:%s\n",(*y).bookname);
printf("Writer:%s\n",(*y).writer);
printf("Page:%d\n",(*y).page);
printf("Year:%d",(*y).year);
}