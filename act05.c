#include <stdio.h>
#include <math.h>
int main(){
  int cat1;
  int cat2;
  printf("Cateto: ");
  scanf("%d", &cat1);
  printf("Cateto: ");
  scanf("%d", &cat2);
  int cuadrados = pow(cat1, 2) + pow(cat2, 2);
  double hip = sqrt(cuadrados);
  double per = cat1 + cat2 + hip;
  printf("Perimetro: %f\n", per);
  return 0;
}
