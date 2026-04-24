#include <stdio.h>

int main() {
    int secim, hesapNo;
    double bakiye;
    char ad[40];
    FILE *Myptr;

    if ((Myptr = fopen("musteri.dat", "r")) == NULL) {
        printf("Dosya Acilamadi!\n");
        return 1;
    } else {
        do {
            printf("Secim yapiniz\n");
            printf("1 - Hesapta para olmayan hesaplar\n");
            printf("2 - Borclu olan hesaplar\n");
            printf("3 - Hesapta para olan hesaplar\n");
            printf("4 - Cikis\n");
            printf("Seciminiz: ");
            scanf("%d", &secim);

            switch (secim) {
                case 1:
                    printf("\nPara olmayan hesaplar:\n");
                    while (fscanf(Myptr, "%d %s %lf", &hesapNo, ad, &bakiye) == 3) {
                        if (bakiye == 0)
                            printf("%-10d %-13s %7.2f\n", hesapNo, ad, bakiye);
                    }
                    break;

                case 2:
                    printf("\nBorclu hesaplar:\n");
                    while (fscanf(Myptr, "%d %s %lf", &hesapNo, ad, &bakiye) == 3) {
                        if (bakiye < 0)
                            printf("%-10d %-13s %7.2f\n", hesapNo, ad, bakiye);
                    }
                    break;

                case 3:
                    printf("\nHesapta para olan hesaplar:\n");
                    while (fscanf(Myptr, "%d %s %lf", &hesapNo, ad, &bakiye) == 3) {
                        if (bakiye > 0)
                            printf("%-10d %-13s %7.2f\n", hesapNo, ad, bakiye);
                    }
                    break;

                case 4:
                    printf("Programdan cikiliyor...\n");
                    break;

                default:
                    printf("Gecersiz secim yaptiniz.\n");
                    break;
            }

            rewind(Myptr); // Dosya başına dön
        } while (secim != 4);

        fclose(Myptr);
    }

    return 0;
}
