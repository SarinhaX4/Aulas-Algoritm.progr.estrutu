#include <stdio.h>
// AULA SOBRE OPERADORES ARITMÉTICOS
// divisão (/) multiplicação (*) e módulo
//  Entrada --> Processamento --> Saída
//  Valores --> Variáveis que armazena o resultado do processamento de uma
//  operação matemática --> Mostrar

main() {
  // escreva um algoritmo que realize uma soma de dois numeros e apresente o
  // resultado
  // 1° declarar variáveis
  // 2° recebe os dados
  // 3° monta a operação de processamento (calculo
  // 4° apresenta a saída

  // verificar saídas das operações de divisão e subtração
  // caso necessário realizar casting, ou seja, mudança de tipo para
  // apresentação de dados corrretamente.

  float numero1, numero2, resultSoma, resultSubtracao, resultDiv, resultmult;
  // float resultadoDiv;

  printf("Digite o primeiro numero \n");
  scanf("%f", &numero1);
  printf("\nDigite o segundo numero \n");
  scanf("%f", &numero2);

  resultSoma = numero1 + numero2;
  resultSubtracao = numero1 - numero2;
  resultDiv = (float)numero1 / numero2;
  resultmult = numero1 * numero2;

  printf("\nO resultado da soma é: %f", resultSoma);
  printf("\nO resultado da subtração é: %f", resultSubtracao);
  printf("\nO resultado da divisão é: %f", resultDiv);
  printf("\nO resultado da Muiltiplicação é: %f", resultmult);
}
