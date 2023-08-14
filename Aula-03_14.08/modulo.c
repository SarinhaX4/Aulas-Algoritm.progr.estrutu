#include <stdio.h>

main() {
  // operador modulo - retorna o resto da divisao de numeros inteiros
  int num1, num2, restoDivis;

  printf("Digite o primeiro numero \n");
  scanf("%d", &num1);
  printf("Digite o segundo numero\n");
  scanf("%d", &num2);

  restoDivis = num1 % num2;

  printf("Resultado do operador modulo:%d", restoDivis);
}