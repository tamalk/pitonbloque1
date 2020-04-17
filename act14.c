#include <stdio.h>
int main(){
  char input;
  scanf ("%c", &input);
  switch(input){
    case 'a':
      printf("bueno");
      break;
    case 'b':
      printf("regular");
      break;
    case 'c':
      printf("malo");
      break;
    case 'd':
      printf("pesimo");
      break;
    default:
      printf(" ");
      break;
  }
  printf("\n");
  return 0;
}
