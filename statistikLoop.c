#include <stdio.h>

int main(void) {
    float arus[6] = {1.2, 1.5, 1.1, 1.8, 1.3, 1.6};
    float total = 0, maksimum = arus[0];

    for (int i = 0; i < 6; i++) {
        total += arus[i];
        if (arus[i] > maksimum) maksimum = arus[i];
    }

    printf("Total: %.2f | Rata-rata: %.2f | Maks: %.2f\n",
           total, total / 6, maksimum);
    return 0;
}
