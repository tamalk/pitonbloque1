#include <stdio.h>
#include <string.h>
int main(){
  char number[12]; //Números enteros de hasta 12 cifras (no se suelen usar más de 32 bits de memoria para enteros)
  scanf("%s", number);
  printf("%ld\n", strlen(number));
  return 0;
}
