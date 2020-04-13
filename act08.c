#include <stdio.h>
#include <math.h>
int main(){
  float momento;
  int horas;
  float realmins;
  int minutos;
  int segundos;
  printf("Hora: ");
  scanf("%f", &momento);
  horas = momento;
  realmins = (momento - horas) * 60;
  minutos = realmins;
  segundos = round((realmins - minutos) * 60);
  if(segundos != 0 && minutos != 0){
    printf("%d horas %d minutos y %d segundos.", horas, minutos, segundos);
  }
  else{
    if(segundos == 0 && minutos != 0){
      printf("%d horas y %d minutos.", horas, minutos);
    }
    else{
      if(segundos != 0 && minutos == 0){
        printf("%d horas y %d segundos.", horas, segundos);
      }
      else{
        if(segundos == 0 && minutos == 0){
          printf("%d horas.", horas);
        }
      }
    }
  }
  printf("\n");
  return 0;
}
