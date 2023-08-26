#include <stdio.h>
#include <string.h>

int busca_string(char *array[], int tamanho, char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char *strings[] = {"texto", "J", "EDA"};
    char busca[] = "EDO";

    printf("Resultado da busca: %d\n", busca_string(strings, sizeof(strings) / sizeof(strings[0]), busca));

    return 0;
}
