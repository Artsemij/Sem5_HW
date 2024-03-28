#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}

int productOfDigits(int number) {
    int product = 1;
    while (number > 0) {
        product *= number % 10;
        number = number / 10;
    }
    return product;
}

int is_happy_number(int n) {
    if (sumOfDigits(n) == productOfDigits(n)) {
        return 1; // Возвращаем 1 если сумма равна произведению
    } else {
        return 0; // Возвращаем 0 если не равны
    }
}

int main() {
    int num;
    printf("Input your number: ");
    scanf("%d", &num);
    if (is_happy_number(num)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}