#include <stdio.h>
int sumOfNumbers(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
return sum;
}
int main() {
 int n;
 printf("Input number: ");
 scanf("%d", &n); 
 int result = sumOfNumbers(n);
 printf("Sum of numbers from 1 to %d: %d\n", n, result);
return 0;
}