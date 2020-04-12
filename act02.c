#include <stdio.h>
int main(){
  int bma;
  int bme;
  int h;
  printf("Base menor: ");
  scanf("%d", &bme);
  printf("Base mayor: ");
  scanf("%d", &bma);
  printf("Altura: ");
  scanf("%d", &h);
  int area = (bma + bme) * 1/2 * h;
  printf("Area del trapecio: %d", area);
  return 0;
}
