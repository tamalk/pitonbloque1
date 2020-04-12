#include <stdio.h>
int main(){
  int lad1;
  int lad2;
  printf("Lado: ");
  scanf("%d", &lad1);
  printf("Lado: ");
  scanf("%d", &lad2);
  int perimetro = 2 * (lad1 + lad2);
  printf("Perimetro: %d", perimetro);
  printf("\n");
  return 0;
}
