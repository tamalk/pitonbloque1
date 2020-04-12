#include <stdio.h>
int main(){
  int millas;
  printf("Millas: ");
  scanf("%d", &millas);
  int km = millas * 1609;
  printf("%d kilometros.", km);
  printf("\n");
  return 0;
}
