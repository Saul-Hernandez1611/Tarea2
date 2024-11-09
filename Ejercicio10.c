/*Construya un programa que lea 100 n ́umeros naturales y cuente
cuantos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

int main() 
{    
  int num, positivos = 0, negativos = 0, nulos = 0;

  printf("Ingrese 100 números naturales (positivos, negativos o cero):\n");

  for (int i = 0; i < 100; i++) 
  {
    printf("Número %d: ", i + 1);
    scanf("%d", &num);

    if (num > 0) 
    {
      positivos++;
    } 
    else if (num < 0) 
    {
      negativos++;
    } 
    else 
    {
       nulos++;
    }
  }

  printf("\nTotal de números positivos: %d\n", positivos);
  printf("Total de números negativos: %d\n", negativos);
  printf("Total de números nulos (cero): %d\n", nulos);

  return 0;
}
