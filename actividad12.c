#include <stdio.h>
#include <stdbool.h>
//Nota: Se ha seguido un procedimiento diferente a la versión de Python.
int i;
int main(){
  int nums[5];
  for (i = 0; i < 5; i++){
    scanf("%d", &nums[i]);
  }
  if (check(nums) == 1){
    printf("SI\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}

int check(int lista[]){
  int num;
  int ant;
  int hasbroken;
  for (i = 1; i < 5; i++){
    ant = lista[i - 1];
    num = lista[i];
    if ((ant < num) == false){
      hasbroken = 1;
      break;
    }
  if (hasbroken == 1){
    return 0;
  }
  else{
    return 1;
    }
  }
}
