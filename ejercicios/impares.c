/* encontrar numeros impares en una matriz leyendo solamente filas de derecha a izquierda y columnas de arriba hacia abajo */
/* 1era version de este ejercicio */

#include <stdio.h>
#define FILAS 5
#define COLUMNAS 5


int main() {
    int matriz[FILAS][COLUMNAS] = {
        {5, 4, 5, 1, 5},
        {4, 8, 4, 3, 6},
        {6, 7, 2, 5, 5},
        {2, 4, 3, 7, 2},
        {5, 9, 2, 1, 5},
    };
   
    printf("matriz:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }
      
    int resultados[20];
    int conteo = 0;

    for (int i = 0; i < FILAS; i++) {
        int fila = 0;
        for (int j = 0; j < COLUMNAS; j++){
            fila = fila * 10 + matriz[i][j];
        }
        if (fila % 2 != 0){
        resultados[conteo++] = fila;
        }
    }
    
    for (int j = 0; j < COLUMNAS; j++){
        int col = 0;
        for (int i = 0; i < FILAS; i++){
            col = col * 10 + matriz[i][j];
        }
        if (col % 2 != 0){
        resultados[conteo++] = col;
        }
    }        
    printf("impares:\n");
    for (int i = 0; i < conteo; i++) {
        printf("%d ", resultados[i]);
    }
    printf("\n");
    return 0;
}
