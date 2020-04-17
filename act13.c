#include <stdio.h>
int main(){
  char *alist[5] = {"A", "E", "I", "O", "U"};
  int input;
  scanf("%d", &input);
  if(input > 0 && input <= 5){
    char rinp = *alist[input - 1];
    printf("%c\n", rinp);
  }
  return 0;
}
