#include <stdio.h>

void invertir_numero(int *numero) { 
    int aux = *numero;
    int invertido = 0;
    while (aux > 0) {
        invertido = (invertido * 10) + (aux % 10);
        aux = aux / 10;
    }
    *numero = invertido;
} /*Esta funcion llamada f_alpha invierte el orden de los dígitos del número. 
Por ejemplo, si el valor inicial es `452`, luego de esta función pasa a ser `254`.*/

void dividir_numero_en_dos(int *numero) {
    *numero = *numero / 2;
}/*Esta función llamada f_beta divide el valor obtenido por 2. 
En el ejemplo, `254 / 2 = 127`.*/

void sumar_digitos_al_numero(int *numero) {
    int aux = *numero;
    int suma = 0;
    while (aux > 0) {
        suma = suma + (aux % 10);
        aux = aux / 10;
    }
    *numero = *numero + suma;
}/*Esta función llamada f_gamma calcula la suma de los dígitos del número actual y luego se la suma al mismo número. 
En este caso, para `127`, la suma de sus dígitos es `1 + 2 + 7 = 10`, por lo tanto el resultado final es `127 + 10 = 137`.*/

void procesar_numero(int *valor_referencia) {
    invertir_numero(valor_referencia);
    dividir_numero_en_dos(valor_referencia);
    sumar_digitos_al_numero(valor_referencia);
}

int main() {
    int valor_inicial = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", valor_inicial);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_numero(&valor_inicial);
    
    printf("Resultado final del enigma: %d\n", valor_inicial);
    
    return 0;
}

/* Justificación de los nombres elegidos

Se cambiaron los nombres originales porque eran genéricos y no permitían entender fácilmente la función de cada parte del código.

- `f_alpha` se renombró como `invertir_numero` porque su lógica consiste en reconstruir el número con los dígitos en orden inverso.
- `f_beta` se renombró como `dividir_numero_en_dos` porque realiza únicamente esa operación.
- `f_gamma` se renombró como `sumar_digitos_al_numero` porque primero calcula la suma de los dígitos y luego la agrega al valor original.
- `procesar_enigma` se renombró como `procesar_numero` porque coordina toda la transformación del valor recibido.

También se renombraron variables:
- `p` por `numero`, porque apunta al número que se modifica.
- `temp` por `aux`, porque se usa como copia para recorrer los dígitos.
- `rev` por `invertido`, porque almacena el resultado de invertir el número.
- 'valor_misterioso' por 'valor_inicial' */