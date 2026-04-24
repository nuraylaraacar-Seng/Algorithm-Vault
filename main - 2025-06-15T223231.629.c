/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i;

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
struct person_data *ptr;

struct person_data person[3]={
{"Ali",170,{17,2,1976}},    
{"Veli",178,{14,4,1980}},    
{"Cenk",176,{4,11,1983}}    
};

for(i=0,ptr=&person[0];ptr<=&person[2];ptr++,i++){
printf("Record No:%d\n",(i+1));
printf("Name:%s\n",ptr->name);
printf("Length:%d\n",ptr->lenght);
printf("Birth Day:%d%d%d",ptr->date.day,
                        ptr->date.month,
                        ptr->date.year);
}
return 0;
}