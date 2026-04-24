/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct students{
char myLetter;
char* name;
char* lastname;
int no;
float score;
};
int main(){
struct students x;
struct students x2;
x.myLetter='N';
x.name="NURAY LARA AÇAR";
x.lastname="ŞANS";
x.no=1646;
x.score=95.6;
x2.myLetter='A';
x2.name="BEDAVİ AÇAR";
x2.lastname="OLACAK";
x2.no=1901;
x2.score=76.4;
printf("myLetter:%c%c\n\n",x.myLetter,x2.myLetter);
printf("name:%s%s\n\n",x.name,x2.name);
printf("lastname:%s%s\n\n",x.lastname,x2.lastname);
printf("no:%d%d\n\n",x.no,x2.no);
printf("Score:%.1f %.1f\n",x.score,x2.score);
return 0;
} 