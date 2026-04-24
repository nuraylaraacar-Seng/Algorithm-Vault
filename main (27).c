/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

enum Seviyeler{
  DUSUK,
  ORTA,
  YUKSEK,
};
int main()
{
  enum Seviyeler OdaSicakligi=ORTA;
  printf("%d",OdaSicakligi);
  return 0;
}