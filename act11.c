#include <stdio.h>
int main(){
  int no1;
  int no2;
  int disp;
  scanf("%d", &no1);
  scanf("%d", &no2);
  if (no1 >= 0 && no2 >= 0){
    disp = no1 * no2;
  }
  else{
    disp = no1 + no2;
  }
  printf("%d\n", disp);
}
