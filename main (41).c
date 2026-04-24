#include <stdio.h>

int main()
{
    unsigned int ipAdres = 0xc0a80102;
    unsigned int maske = 0xff000000;
    unsigned int tmp;
    int bit = 32;
    int i;

    for (i = 1; i <= 4; i++) {
        tmp = ipAdres & maske;           // Maske ile ipAdres'in ilgili kısmını al
        tmp = tmp >> (bit - i * 8);      // Sağ shift ile segmenti elde et
        printf("%u", tmp);               // unsigned olarak yazdır

        if (i != 4) {
            printf(".");
        }
        maske = maske >> 8;             
    }

    return 0;
}
