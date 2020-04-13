#include <stdio.h>
int main(){
  int teams;
  printf("Equipos: ");
  scanf("%d", &teams);
  int matches = teams * (teams - 1);
  printf("Partidos: %d\n", matches);
  return 0;
}
