#include <stdio.h> /*std lib IO*/
#include <ctype.h> /* ctype gdzie znajduje sie funkcja isprint*/
int main() {
  int kod;
  printf("Podaj kod ascii: ");
  scanf("%i", &kod); /*znak %i - integer*/
  if (isprint(kod)) { /*sprawdz man ctype.h - czy znak jest drukowalny? funkcja isprint*/
    printf("%c\n", kod); /*sprawdzic printf ile zmiennych % jest dostepnych i co oznaczja*/
  } else {
    printf("znak niedrukowalny\n");
  }
  return 0;
}
