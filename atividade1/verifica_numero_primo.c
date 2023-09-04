#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);

    if (ehPrimo(numero)) {
        printf("1 - O número %d é primo.\n", numero);
    } else {
        printf("0 - O número %d não é primo.\n", numero);
    }

    return 0;
}
