#include <stdio.h>

int nod(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Input your numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = nod(num1, num2);
    printf("Greatest common divisor: %d\n", result);
    return 0;
}