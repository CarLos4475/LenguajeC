//Multiplicación de matrices
#include <stdio.h>

int main(void) {
  
  //Declarar las variables de las dimensiones
  int filas1, filas2;
  int columnas1, columnas2;
  //Declarar los contadores y la matriz resultante
  int i, j, k;
  int matrizResultante[0][0];

  //Solicitar al usuario las dimensiones de la primera matriz
  printf("Introduce el número de filas de la matriz 1: ");
  scanf("%d", &filas1);
  printf("Introduce el número de columnas de la matriz 1: ");
  scanf("%d", &columnas1);
  //Declarando la matriz 1 con sus dimensiones
  int matriz1[filas1][columnas1];

  //Solicitar al usuario las dimensiones de la segunda matriz
  printf("\nIntroduce el número de filas de la matriz 2: ");
  scanf("%d", &filas2);
  printf("Introduce el número de columnas de la matriz 2: ");
  scanf("%d", &columnas2);
  //Declarando la matriz 2 con sus dimensiones
  int matriz2[filas2][columnas2];

  //Comprobar que sea posible hacer la multipicacion
  if (columnas1 == filas2) {
    //Se declara la matriz resultado
    int matrizResultado[filas1][columnas2];

    //Rellenar la matriz resultado con 0
    for (i = 0; i < filas1; i++) {
      for (j = 0; j < columnas2; j++) {
        matrizResultado[i][j] = 0;
      }
    }
    
    //Ciclo for que ayude a introducir los valores de la primera matriz
    printf("\n\nIntroduce los valores de la matriz 1: \n");
    for (i = 0; i < filas1; i++) {
      for (j = 0; j < columnas1; j++) {
    printf("Posicion %d, %d: ", i+1, j+1);
    scanf("%d", &matriz1[i][j]);
      }
    }    
    
    //Imprimir la primera matriz
    printf("\nLa matriz 1 es: \n");
    for (i=0; i<filas1; i++) {
      for (j=0; j<columnas1; j++) {
        printf("[%d]", matriz1[i][j]);
      }
      printf("\n");
    }

    //Ciclo for que ayude a introducir los valores de la segunda matriz
    printf("\n\nIntroduce los valores de la matriz 2: \n");
    for (i = 0; i < filas2; i++) {
      for (j = 0; j < columnas2; j++) {
    printf("Posicion %d, %d: ", i+1, j+1);
    scanf("%d", &matriz2[i][j]);
      }
    }    

    //Imprimir la segunda matriz
    printf("\nLa matriz 2 es: \n");
    for (i=0; i<filas2; i++) {
      for (j=0; j<columnas2; j++) {
        printf("[%d]", matriz2[i][j]);
      }
      printf("\n");
    }
    printf("\n\n");
    printf("---------------------------MULTIPLICACION---------------------------\n\n");

    //Ciclo que va a multiplicar las matrices
    for (i = 0; i < filas1; i++) {
      for (j = 0; j < columnas2; j++) {
        printf("C_%d%d = ",i+1,j+1);
          for (k = 0; k < filas2; k++) {
            if (k == filas2 - 1) {
              printf("a_%d%d * b_%d%d = ",i+1,k+1,k+1,j+1);
            } else {
              printf("a_%d%d * b_%d%d + ",i+1,k+1,k+1,j+1);
            }
            matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            
            
          }  
        printf("%d\n\n",matrizResultado[i][j]);
      }
    }    
    //Mostrar la matriz resultante en pantalla
    printf("------------------------------MATRIZ RESULTANTE------------------------------\n");
    printf("\nLa matriz resultante es: \n");
    for (i=0; i < filas1; i++){
      for (j=0; j < columnas2; j++) {
        printf("[%d]", matrizResultado[i][j]);
      }
      printf("\n");
    }
    
    
  } else {
    printf("\nNo se pueden multiplicar las matrices");
  }

  

  
  return 0;
}