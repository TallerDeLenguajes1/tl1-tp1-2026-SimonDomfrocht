#include <stdio.h>

int main() {
    int variable = 10;
    int *puntero = &variable;

    printf("hola mundo\n");

    printf("El contenido del puntero: %d\n", *puntero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("La dieccion de memoria de la variable: %p\n", &variable);
    printf("la direccion de memoria del puntero: %p\n", &puntero);
    printf("El tamanio de memoria utilizado por la variable: %zu\n", sizeof(variable));

    return 0;
}