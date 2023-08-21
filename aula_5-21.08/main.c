#include <stdio.h>

main(){
  // int A = 10,
  // B = 20,
  // C;

  // C = A,
  // B = C,
  // A = B;

  // printf("%d, %d, %d", A, B , C);

  //OPERADORES RELACIONAIS:
  //em C, qualquer número diferente de 0 é verdadeiro.
  // != diferente

  int a = 10, b = 15, resultado;
  resultado = a != b;

  //Estrutura e decisão/seleção

  // if( a > b){
  //   printf("A é maior");
  // }
  // ele não executou o prinff a cima pq ele só imprime o verdadeiro:
    if( a < b){
    printf("A é menor\n");
    }else{
      printf("B é menor\n");
    }

  printf("continua a execução do código");
}