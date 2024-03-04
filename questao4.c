#include <stdio.h>

void converter_para_romano(int numero) {
    int i;
    const int valores_decimal[] = { 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    const char *valores_romanos[] = { "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    if (numero < 1 || numero > 100) {
        printf("Numero fora do intervalo permitido (1-100)\n");
        return;
    }

    printf("%d = ", numero);

    for (i = 0; i < 9; i++) {
        while (numero >= valores_decimal[i]) {
            printf("%s", valores_romanos[i]);
            numero -= valores_decimal[i];
        }
    }
    printf("\n");
}

int main() {
    int i;
    printf("Tabela de numeros decimais para algarismos romanos (1-100):\n");
    for (i = 1; i <= 100; i++) {
        converter_para_romano(i);
    }
    return 0;
}
