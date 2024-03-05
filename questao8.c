#include <stdio.h>

int InverterNumero(int numero) {
    int invertido = 0;
    int digito;

    // Enquanto houver dígitos no número.
    while (numero > 0) {
        // Extrai o último dígito do número.
        digito = numero % 10;
        
        // Adiciona o dígito invertido ao número invertido.
        invertido = invertido * 10 + digito;
        
        // Remove o último dígito do número original.
        numero /= 10;
    }
    
    return invertido;
}

int main() {

    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int invertido = InverterNumero(numero);
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}
