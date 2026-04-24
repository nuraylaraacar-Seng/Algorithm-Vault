/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct personel
{
char adi[21];    
struct personel *next;    
    
};
//artık personel yerine dugum kullanılack ve bunu saüğlayan değişken 
//değiştirme gibi düşün typedef değiştirme
typedef struct personel node;
//*head node tipinde bir işaretçidir 
//her zaman listenin başını göstercek
node *head,*previousnode,*new,*to_be_deleted;
int main(){
printf("Program çalışıyor.Liste işlemleri buraya eklenecek");
return 0;
}

