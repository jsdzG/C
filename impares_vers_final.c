/* para esta version del anterior ejercicio se podra definir la dimension de la matriz */

#include <stdio.h>

int main() {
    int filas, columnas;

    printf("numero de filas: ");
    scanf("%d", &filas);
    printf("numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    printf("elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }
      
    int resultados[20];
    int conteo = 0;

    // numeros en filas que sean impares
    for (int i = 0; i < filas; i++) {
        int fila = 0;
        for (int j = 0; j < columnas; j++) {
            fila = fila * 10 + matriz[i][j];
        }
        if (fila % 2 != 0){
            resultados[conteo++] = fila;
        }
    }
    
    // numeros en columnas que sean impares
    for (int j = 0; j < columnas; j++) {
        int col = 0;
        for (int i = 0; i < filas; i++){
            col = col * 10 + matriz[i][j];
        }
        if (col % 2 != 0){
            resultados[conteo++] = col;
        }
    }        

    // resultados
    printf("Impares:\n");
    for (int i = 0; i < conteo; i++) {
        printf("%d ", resultados[i]);
    }
    printf("\n");
    
    return 0;
}
