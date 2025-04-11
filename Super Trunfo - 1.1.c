#include <stdio.h>

int main() {

  char letra1, letra2;
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float km1, km2;
  float pib1, pib2;

  printf("Qual a letra da cidade?");
  printf("\n");
  scanf("%c", &letra1);
  printf("\n");

  printf("Qual o codigo da cidade?");
  printf("\n");
  scanf("%s", &codigo1);
  printf("\n");

  printf("Pressione Enter para sair...");
  getchar();
  getchar();
  
  return 0;

}
