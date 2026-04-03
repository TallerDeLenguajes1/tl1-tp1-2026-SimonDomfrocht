# TP1 Punto 2 Simon Domfrocht

## Archivo `.gitignore`

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