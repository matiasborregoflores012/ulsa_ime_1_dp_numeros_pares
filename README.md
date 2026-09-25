# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
me va a pedir 5 numeros enteros uno por uno y solo va aguardar los pares y los impares los va a descartar por ejemplo meto 2,4,6,8,10 me va a arrojar que todos los numeros son pares y me los va a señalar y si pongo numeros que no son pares por ej 3,7,9,5,11 los va a ignorar y si pongo una letra se crashea y se cierra y esto nos podria servir para saber que numeros son pares y impares y ya esto hace el programa
_____

## 2. Entradas y salidas (Fase 1)
entrada: introducir los 5 numeros enteros par o impar
salida : que me marque cuales son son impares y pares cuales son

**Entradas:**
1. _____los 5 numeros enteros 

**Salidas:**
1. _____cuantos pares son me a va arrojar
2. _____y cuales son los pares

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____que no debo poner puntos decimales
- _____que solo sean numeros no letras

**Tamaño del arreglo y por qué** (piensa en el peor caso):
_____5 y porque asi lo quiero yo lo puedo hacer de mas

**¿El 0 y los negativos son pares? ¿Por qué?**
_____si porque 8 entre 2 son 0 y eso es par

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_____son 5 numeros

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | __8,2___ | ___8,2__ |
| 2 | ___1,2,3,4,5__ | _2,4____ | ____2,4_ |
| 3 | ___2,4,6,8,10__ | __todos___ | __2,4,6,8,10___ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** si
**¿Tuve que corregirla?** _____no

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
PS C:\Users\taqui\Documents\ulsa_ime_1_dp_numeros_pares> ./main.exe
Escribe un numero: 1
Escribe un numero: 2
Escribe un numero: 3
Escribe un numero: 4
Escribe un numero: 5
Se guardaron 2 numeros pares.
Los numeros pares son: 2 4 
```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
_____las posiciones que si llene muestran numeros correctos y las que  no se usaron muestran cosas basura

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
_____usar total pares para que el arreglo quede compacto y funcione bien 

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | 2 pares: 2,4 | si |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | 2 pares: 8, 2 | si |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | 5 pares | si |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | 0 pares | si |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 |2 pares: 0, -4 | si |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir |falla | no |
| Caso propio 1 | 10,20,30,40,50 |  | 5 pares |  5 pares|si
| Caso propio 2 | 15,20,25,30,45¿| 2 pares: 30, 50 |  pares: 30, 50| si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 |una salida poco claro o sencilla |agregarle un menu | si |
| 2 | una entrada invalida como una letra | codigo para resolverlo | si, se reinicia y vuelve a pedir|

**Reto elegido (opcional):** entrada valida
## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ninguna | se usar cada uno de los codigos |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
a hacer arreglos

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
ninguno por el momento funciona

**¿Qué fue lo más difícil y cómo lo resolví?**
hacer el for bien que me agarrara los numeros pares

**¿Qué pregunta me quedó sin responder?**
ninguna

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
porque no distingue entre pares

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom