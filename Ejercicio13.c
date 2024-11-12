/*Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.*/

#include <stdio.h>

int main() 
{
  int n;

  printf("Ingrese la dimensiòn de tú arreglo: ");
  scanf("%d", &n);

  int arr[n];
  int suma = 0;

  printf("Ingrese los elementos del arreglo:\n");
  for (int i = 0; i < n; i++) 
  {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) 
  {
    suma += arr[i];
  }

  printf("La suma de los elementos es: %d\n", suma);

  return 0;
}
