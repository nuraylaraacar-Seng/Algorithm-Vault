#include <stdio.h>

int binarysearch_iterative(int a[], int target, int size) {
    int min = 0, max = size - 1;

    while(min <= max) {
        int mid = (min + max) / 2;

        if(a[mid] == target)
            return mid; // Bulundu
        else if(target < a[mid])
            max = mid - 1;
        else
            min = mid + 1;
    }

    return -1; // Bulunamadı
}

int main() {
    int a[8] = {1, 3, 4, 5, 17, 18, 31, 33};
    int result = binarysearch_iterative(a, 17, 8);

    if(result != -1)
        printf("Aranan deger dizide, index: %d\n", result);
    else
        printf("Aranan deger bulunamadi\n");

    return 0;
}
