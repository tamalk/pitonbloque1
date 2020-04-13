#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int a = 0;
  int suma = 0;
  float realsuma;
  float realmedia;
  int media;
  while (a <= n){
    suma = suma + (a+1);
    ++a;
    if (a == n){
      realsuma = suma;
      realmedia = realsuma / n;
      media = realmedia;
      if (suma % n == 0){
        printf("%d", media);
      }
      else{
        printf("%f", realmedia);
      }
    }
  }
  print("\n");
  return 0;
}
