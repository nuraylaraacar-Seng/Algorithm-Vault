
#include <stdio.h>

struct books{
const char* bookname;
const char* writer;
int page;
int year;
};
int main(){
int i;
struct books x[2];
x[0].bookname="Harry Potter ve Felsefe Tasi";
x[0].writer="J.K.Rowling";
x[0].page=238;
x[0].year=1999;

x[1].bookname="bilinmeyen bir kadını mektubu";
x[1].writer="stefan zweig";
x[1].page=88;
x[1].year=1978;

for(i=0;i<=1;i++){
printf("%d. book\n:",i+1);
printf("bookname:%s\n",x[i].bookname);
printf("writer:%s\n",x[i].writer);
printf("page:%d\n",x[i].page);
printf("year:%d\n", x[i].year);
}
return 0;
}
