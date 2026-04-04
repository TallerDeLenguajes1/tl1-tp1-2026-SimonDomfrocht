#include <stdio.h>

int cuadrado(int numero) {
    return numero * numero;
}

void cuadrado_void(int numero, int *resultado) {
    *resultado = numero * numero;
}

void mostrar_direccion_y_contenido(int variable) {
    printf("contenido de la variable: %d\n", variable);
    printf("direccion de memoria de la variable: %p\n", &variable);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar(int *a, int *b) {
    int aux;
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main() {
    int num;
    int resultado;
    int a, b;

    printf("Ingrese un numero para calcular su cuadrado: ");
    scanf("%d", &num);

    printf("El cuadrado del numero usando funcion con retorno es: %d\n", cuadrado(num));

    cuadrado_void(num, &resultado);
    printf("El cuadrado del numero usando funcion void es: %d\n", resultado);

    mostrar_direccion_y_contenido(num);

    printf("\nIngrese un numero a: ");
    scanf("%d", &a);
    printf("\nIngrese un numero b: ");
    scanf("%d", &b);

    printf("Valores originales: a = %d, b = %d\n", a, b);

    invertir(&a, &b);
    printf("Valores invertidos: a = %d, b = %d\n", a, b);

    ordenar(&a, &b);
    printf("Valores ordenados: a = %d, b = %d\n", a, b);

    return 0;
}