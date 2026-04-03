# TP1 - Simon Domfrocht

## Punto 2

### ¿Qué es el archivo `.gitignore`?

El archivo `.gitignore` es un archivo de configuración que se utiliza en Git para indicarle qué archivos o carpetas no deben ser tenidos en cuenta por el sistema de control de versiones. Es decir, sirve para que ciertos archivos no aparezcan como cambios a subir al repositorio.

### ¿Por qué es conveniente incluirlo?

Es conveniente incluirlo porque ayuda a mantener el repositorio más ordenado y limpio. Muchas veces, dentro de un proyecto se generan archivos que no son necesarios para compartir, por ejemplo archivos temporales, ejecutables, configuraciones personales del editor o archivos de prueba. Si esos archivos se suben al repositorio, pueden generar confusión o hacer que el proyecto tenga contenido innecesario.

Además, usar `.gitignore` permite que solo se suban los archivos importantes del trabajo práctico y no otros que no aportan al desarrollo del proyecto.

### ¿Cuándo se debe hacer?

Lo más recomendable es crear el archivo `.gitignore` al inicio del proyecto, antes de comenzar a hacer commits, porque de esa forma Git ya sabe desde el comienzo qué cosas debe ignorar. De todos modos, también se puede agregar después si durante el desarrollo aparecen archivos que no conviene subir.

### ¿Cómo se configura?

Se configura creando un archivo llamado exactamente `.gitignore` en la carpeta principal del repositorio. Dentro de ese archivo se escriben las reglas de exclusión, generalmente una por línea.

Por ejemplo, si se quiere ignorar un archivo específico llamado `ignorado.txt`, dentro del archivo `.gitignore` se debe escribir:

`ignorado.txt`

Con esa regla, Git ignorará ese archivo y no lo mostrará como pendiente para agregar o subir.

### Regla agregada en este repositorio

En este repositorio se agregó la siguiente regla:

`ignorado.txt`

Esto se hizo para que Git ignore ese archivo en caso de existir dentro del proyecto.

---

## Punto 3

### codigo_sin_funcionar

Luego de arreglar los errores del codigo, analice el programa colocando un breakpoint en la línea del `main` donde se llama a la función `duplicar_numero(&valor1)`.

Luego ejecuté el programa con F5 y observé las variables en el panel de depuración de VS Code.

Antes de entrar a la función, en esta prueba de depuracion, las variables del programa tenían los valores: valor1 = 4 y valor2 = 6 ingresados por teclado y la variable `suma` contenía la suma de ambos números, cuyo resultado era 10.

Usando F11 ingresé dentro de la función `duplicar_numero`. Allí observé que el parámetro `numero` es un puntero que almacena la dirección de memoria de `valor1`,que en este caso era 0x5ffe88.

Cuando se ejecuta la instrucción `*numero *= 2;`, se modifica directamente el contenido de la dirección apuntada por `numero`. Por eso el valor original de `valor1` cambia realmente en el `main`, es decir valor1 paso a ser 8.

Finalmente, al volver al programa principal, se pudo comprobar que `valor1` quedó duplicado correctamente.


### codigo_misterio

Para analizar este programa utilicé nuevamente el debugger de VS Code colocando un breakpoint en la línea del `main` donde se llama a la función `procesar_numero(&valor_inicial)`.

Al comenzar la ejecución, el valor inicial de la variable `valor_inicial` era `452`. Desde ese punto, usando `F11`, fui entrando paso a paso en cada función para observar cómo se modificaba el número en memoria.

#### Paso 1: función `invertir_numero`

Primero ingresé a la función `invertir_numero`. Allí observé que se utiliza una variable auxiliar llamada `aux` para recorrer los dígitos del número, y otra variable llamada `invertido` para ir armando el número al revés.

Con el valor inicial `452`, el proceso fue el siguiente:

- se toma el último dígito (`2`)
- luego el siguiente (`5`)
- luego el siguiente (`4`)
- con eso se forma el número `254`

Al finalizar esta función, el contenido de `valor_inicial` pasó de `452` a `254`.

#### Paso 2: función `dividir_numero_en_dos`

Después ingresé a la función `dividir_numero_en_dos`. Esta función es más simple, ya que solamente divide el número actual por 2.

En este caso:

`254 / 2 = 127`

Por lo tanto, luego de esta función, `valor_inicial` pasó a valer `127`.

#### Paso 3: función `sumar_digitos_al_numero`

Finalmente ingresé a la función `sumar_digitos_al_numero`. En esta parte se vuelve a usar una variable auxiliar para recorrer los dígitos del número y se calcula la suma de esos dígitos.

Con el número `127`, la suma fue:

`1 + 2 + 7 = 10`

Luego esa suma se agregó al número original:

`127 + 10 = 137`

Entonces, al finalizar esta función, `valor_inicial` pasó a valer `137`.

#### Conclusión de la depuración

A partir de la depuración pude concluir que el programa realiza tres operaciones consecutivas sobre un número entero:

1. invierte sus dígitos
2. divide el resultado por 2
3. suma al número la suma de sus propios dígitos

Con el valor inicial `452`, el recorrido completo fue:

`452 → 254 → 127 → 137`

Por lo tanto, el resultado final del programa es `137`.

## Punto 4

En los apartados 2 y 3 del ejercicio, el resultado obtenido es el mismo porque en ambos casos se muestra la dirección de memoria de la variable.

En el punto 2, al imprimir `puntero`, se muestra la dirección de memoria almacenada dentro del puntero. Como el puntero apunta a la variable, esa dirección es justamente la dirección de la variable.

En el punto 3, al imprimir `&variable`, también se muestra la dirección de memoria de la variable.

Por eso ambos resultados coinciden.

En el punto 4, al imprimir `&puntero`, lo que se obtiene es la dirección de memoria del puntero como variable, no la dirección de la variable apuntada.

Ese valor no es igual a los anteriores, porque el puntero también ocupa un espacio propio en memoria y tiene su propia dirección.