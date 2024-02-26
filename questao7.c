#include <stdio.h>
int isPrime(int n, int divisor) {
    if (n <= 1) {
        return 0;  
    } else if (divisor == 1) {
        return 1;  
    } else {
        if (n % divisor == 0) {
            return 0;  
        } else {
            return isPrime(n, divisor - 1);
        }
    }
}
int main(void) {
    int num;
    printf("Digite um numero natural: ");
    scanf("%d", &num);
    if (isPrime(num, num / 2)) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d não e um numero primo.\n", num);
    }
    return 0;
}