#include <stdio.h>

long long calculateGrains(int cell) {
    if (cell < 1 || cell > 64) {
        return -1; // Возвращаем -1 в случае некорректного ввода
    } else {
        long long grains = 1;
        for (int i = 2; i <= cell; i++) {
            grains *= 2;
        }
        return grains;
    }
}

int main() {
    int cell;
    printf("Input number of cell:");
    scanf("%d", &cell);
    long long result = calculateGrains(cell);
    if (result == -1) {
        printf("Некорректный ввод\n");
    } else {
        printf("%lld\n", result);
    }
    return 0;
}