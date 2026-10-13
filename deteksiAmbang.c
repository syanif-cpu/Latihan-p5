#include <stdio.h>

int main(void) {
    float tegangan[8] = {220.5, 205.0, 215.3, 232.8, 228.0, 209.9, 230.0, 240.1};

    printf("Sampel di luar rentang aman 210-230 V:\n");
    for (int i = 0; i < 8; i++) {
        if (tegangan[i] < 210 || tegangan[i] > 230) {
            printf("Sampel ke-%d: %.1f V\n", i + 1, tegangan[i]);
        }
    }
    return 0;
}
