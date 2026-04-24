/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

unsigned int ipAdres=0xc0a80102;
unsigned maske=0xff000000;
int segment1,segment2,segment3,segment4;// 4 segmetten oluşuyor
int i,bit=32;
unsigned temp;
for(int i=1;i<=4;i++){ //for döngüsündede belirttim dögü 4 defa çalışır ve 4 segmentten oluşur
temp=ipAdres&maske;    
if(i!=4){
maske=maske>>8;//8 bit sağa kaydırma     
temp=temp>>(bit-i*8);    
printf("%d.",temp);    
}  
else{
    
printf("%d",temp);//son segmentten sonra nokta koymamızın sebebi 3 nokta olmasıdır 4 parçadan oluşacak ve 3 nokta olacak
}    

}


getchar();
return 0;


}