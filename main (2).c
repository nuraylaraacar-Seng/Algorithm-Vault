#include <stdio.h>
#include <stdlib.h>
float üslüsayı(float x,int y ); 
int main(){
  float taban=0,sonuc=0;
  int üs=0;
  printf("taban ve üs değerlerini giriniz:");
  scanf("%f%d",&taban,&üs);
  sonuc=üslüsayı(taban,üs);
  printf("Sonuç değerini girin:%f\n",sonuc);
  return 0;
}
float üslüsayı(float x,int y){
float sonuc=1;
int i;
if(y<0){
 for(i=0;i<-y;i++){
  sonuc*=1/x;
}
}
else{
for(i=0;i<y;i++){
    sonuc*=x;
}
}
return sonuc;
}
