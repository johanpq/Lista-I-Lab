#include <stdio.h>
void imprimir_ascii() {
    int i;
    for (i = 0; i < 128; ++i) {
        printf("%d: %c\t", i, i);
       
    }
}
int main(void) {
    imprimir_ascii();
    return 0;
}