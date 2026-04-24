/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i,j;
char *ilkBaharAylar[3]={"Mart","Nisan","Mayis"};
char *yazAylar[3]={"Haziran","Temmuz","Agustos"};
char *sonBaharAylar[3]={"Eylul","Ekim","Kasim"};
char *kisAylar[3]={"Aralik","Ocak","Subat"};

char**table[4];
table[0]=ilkBaharAylar;
table[1]=yazAylar;
table[2]=sonBaharAylar;
table[3]=kisAylar;
for(i=0;i<4;i++){
 for(j=0;j<3;j++){
     printf("%s\n",table[i][j]);
 }
}

    return 0;
}