/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

node* createList(){
node *head,*p;    
printf("How many students in the list:");    
scanf("%d",&n);    
for(k=0;k<n;k++){
if(k==0){
head=(node*)malloc(sizeof(node));
p=head;
}    
else{
p->next=(node*)malloc(sizeof(node));    
p=p->next;
}    
printf("Enter %d.student number:",k+1);   
printf("Enter %d.student name:",k+1);    
printf("Enter %d.student age:",k+1);    
}    
p->next=NULL;    
return head;
}