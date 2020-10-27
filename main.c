#include <stdio.h>
#define clearScreen() printf("\033[H\033[J")
int main(void) {

  char nomeFunc[] = "";
  float montanteS = 0;

  clearScreen();

  printf("Escreva o nome do funcionário: ");
  scanf("%s", nomeFunc);

  printf("\nEntre com o montante da semana do funcionário: R$");
  scanf("%f", &montanteS);

  printf("\nO funcionário %s tem um montante semanal de: R$%6.2f", nomeFunc, montanteS);

  return 0;
}
