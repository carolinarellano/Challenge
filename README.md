# Challenge
# List Lib D

La cuarta parte de una libreria de listas.

to_int

## About

`List_lib` es una herramienta para manipular listas.

contiene una funcion

- to_int_lol

### to_int_lol

`input`: una lista puede contener '-' al inicio y posteriormente nodos de digitos.

la función convertirá la lista a un entero con signo, y le sumará `1`

`i.e` para la lista

> `[1]->[2]->[1]->[2]->[2]->[2]->[3]->[1]`

el resultado será

`12122232`

para la lista

> `[-]->[5]->[7]->[9]->[2]`

el resultado será

`-5791`

## Uso

Al ejecutarse el programa, se leera un archivo `input.txt` y recibiremos _un_ argumento de `main`: la
operación que desea realizar el usuario. (`to_int_lol`).

cada linea del archivo `input` 

- la primer linea puede contener el simbolo `-` que denota un número negativo.
- cada linea contiene un digito, que representa un nodo de la lista.


al terminar la ejecución, el resultado sera guardado en el archivo `result.txt` con el formato de su elección

## Restricciones

- la lista debe de ser __single__ linked list (no es permitido que sea __double__).

usaremos archivos para simular `streams` de datos, por lo tanto, un archivo
únicamente podra:

- Ser leido UNA vez (`no-rewind`).
- Ser abierto UNA vez.
- Al leer una linea del archivo, ya no podremos leer esa linea de nuevo.
- El usuario que usará su programa no tiene permisos de editar ningún archivo diferente a `result.txt`
- `result.txt` solo puede escribirse, no tenemos permisos de lectura (`w`).

## Podemos asumir que

- Todas las lineas de `input.txt` terminar con `'\n'`
- cada linea sera `[0-9]` , excepto la primera que puede ser `-` o `[0-9]`

## Ejemplo

```console
[input.txt]
-
1
2
3
9
```

`./app to_int_lol`

Al terminar la ejecución del programa, tendrá que existir un archivo result.txt tal que

```console
[result.txt]
-1238
```
