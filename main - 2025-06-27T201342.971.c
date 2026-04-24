/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


struct Car{
char brand[40];
char model[60];
int year;
};
int main()
{
struct Car c1={"Opel","Corsa",1990};
struct Car c2={"Ford","Focus",1971};
struct Car c3= {"BMW","X5",1999}; 
struct Car c4={"Toyota","Corolla",2012};

printf("%s %s %d\n",c1.brand,c1.model,c1.year);
printf("%s %s %d\n",c2.brand,c2.model,c2.year);
printf("%s %s %d\n",c3.brand,c3.model,c3.year);

    return 0;
}