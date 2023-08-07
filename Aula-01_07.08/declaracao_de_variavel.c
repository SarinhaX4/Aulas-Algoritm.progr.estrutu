// incluir a diretiva (ou importação da BIBLIOTECA)
#include <locale.h>
#include <stdio.h>
// função principal
main() {
  setlocale(LC_ALL, "Portuguese");
  // ao adicionar o igual devo ler como: "recebe"
  int numero1 = 20000;
  int numero2 = 10;

  float numero3 = 2.1;
  double numero4 = 3.5;

  // concatenação de string com variável
  printf("O valor armazenado na variável 1 é: %d e na variavel 2 é: %d",
         numero1, numero2);
  printf("\n o valor armazenado na variável 3 é: %.2f", numero3);
  // devo apresentar as variáveis respectivamente na ordem
  printf("\n o valor armazenado na variável 4 é: %.2lf", numero4);
  // adiciono ".2" se eu quero apenas 2 números após a virgula

  int idade;
  printf("\n\n Digite sua idade");
  scanf("%d", &idade);
  // que eu for usar numero no float tenho que usar o &
  printf("Sua idade é: %d", idade);
}
