/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

node* addNode(node* head){
int stdNo;    
node *newNode=(node*)malloc(sizeof(node));    
printf("Enter new student number:"); scanf("%d",&newNode->no);
printf("Enter new studednt name:");  scanf("%d",&newNode->name); 
printf("Enter new student  age:");   scanf("%d",&newNode->age);    
    
printf("Enter std number that new record will bee added before:\n");    
printf("Press 0 to add to the end of list \n");
scanf("%d",&stdNo);   

p=head;    
if(p->no=stdNo){
newNode->next=p;    
head=newNode;    
}
}