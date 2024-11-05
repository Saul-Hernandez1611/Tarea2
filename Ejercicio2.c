//Construir un algoritmo tal que dado el radio de un cırculo, calcule e imprima el area y la circunferencia.
//El area del cırculo se calcula como Area = π ∗ radio^2 y la circunferencia se calcula como Circunferencia =2 ∗ π ∗ radio.

#include <stdio.h>
#include <math.h>
#define Pi 3.1415926535898

int main() 
{
  float radio;
  float area, perimetro;

  printf("Ingresa el radio del círculo: ");
  scanf("%f", &radio);

  area = Pi * radio * radio;
  perimetro = 2 * Pi * radio;

  printf("El área del círculo es: %.2f\n", area);
  printf("El perímetro del círculo es: %.2f\n", perimetro);

    return 0;
}
