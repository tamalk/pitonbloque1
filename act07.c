#include <stdio.h>
int main(){
  printf("Introduzca un numero: ");
  int numero;
  scanf ("%d", &numero);
  int i;
  int acc = 0;
  int sum = 0;
  for(i = 0; i <= numero + 1; i++){
    acc = acc + 2;
    sum = sum + acc;
    ++i;
  }
  printf("Suma: %d\n", sum);
  return 0;
}
