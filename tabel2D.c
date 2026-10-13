#include <stdio.h>

int main(void) {
    int data[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    printf("Tabel Data 3x3\n");
    printf("-------------------\n");
    for (int baris = 0; baris < 3; baris++) {      /* loop luar: baris */
        for (int kolom = 0; kolom < 3; kolom++) {  /* loop dalam: kolom */
            printf("%5d", data[baris][kolom]);
        }
        printf("\n");
    }
    return 0;
}
