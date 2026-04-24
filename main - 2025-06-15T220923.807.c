/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{


struct birthDate{
int day;
int month;
int year;
};
struct person_data{
char name[40];
int lenght;
struct birthDate date;
};
struct person_data person[3]={{"Sabiha",159,{14,2,1984}},
{"Nuray",163,{30,4,2007}},{"ali",185,{13,8,2000}}
};
for(int i=0;i<3;i++){
printf("Record No:%d",(i+1));
printf("Name:%s",person[i].name);
printf("Length:%d",person[i].lenght);
printf("Birth Date:%d%d%d",person[i].date.day,person[i].date.month,person[i].date.year);
printf("\n");

}
return 0;
}
    
    
