#include <stdio.h>

int soma_array(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int array[] = {5, 7, 9, 6};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Soma do array: %d\n", soma_array(array, tamanho));

    return 0;
}
