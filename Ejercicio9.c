/*Haga un diagrama de flujo para obtener la tabla de multiplicar de un
numero entero N, comenzando desde el 1.*/

#include <stdio.h>

int main() 
{
  int N, i, Nlimite;

  printf("Ingrese un número entero: ");
  scanf("%d", &N);
  printf("Ingrese el límite de la tabla de multiplicar: ");
  scanf("%d", &Nlimite);

  printf("Tabla de multiplicar del %d hasta %d:\n", N, Nlimite);

  for (i = 1; i <= Nlimite; i++) 
  {
    printf("%d x %d = %d\n", N, i, N * i);
  }

  return 0;
}
