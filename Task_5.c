#include <stdio.h>

#define MAX_LENGTH 1001

int checkBrackets(char input[]) {
    int count = 0;
    for (int i = 0; input[i] != '.'; i++) {
        if (input[i] == '(') {
            count++;
        } 
        else if (input[i] == ')') {
            count--;
            if (count < 0) {
                return 0; // скобки расставлены неверно
            }
        }
    }
    return (count == 0); // если скобки расставлены верно, вернёт 1, иначе 0
}

int main() {
    char input[MAX_LENGTH];
    printf("Input your raw: ");
    scanf("%1000s", input); // читаем строку, ограничивая длину 1000 символов
    if (checkBrackets(input)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}