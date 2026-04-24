/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct{
    char* name;
    int age;
    float weight;
}Student;
int main(){
    Student s1={"Nazli",28,62.3};
    Student s2={"Nuray",18,45.9};
    
    printf("Your Name:%s\n",s1.name);
    printf("Your Age:%d\n",s1.age);
    printf("Your Weight:%.2f\n\n",s1.weight);
    
    printf("Your Name:%s\n",s2.name);
    printf("Your Age:%d\n",s2.age);
    printf("Your Weight:%.2f",s2.weight);
    return 0;
}