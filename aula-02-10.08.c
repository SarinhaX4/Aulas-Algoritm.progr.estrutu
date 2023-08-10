#include <stdio.h>

main(){
    // Armazenar texto em variáveis
    // Declaração
    char nome [50] = "Maria da Silva";
    char nomeUsuario [25];
    char endereco [50];

    printf("O nome digitado é: %s", nome);

    // Recebendo valores do teclado
    // Usando scanf
    printf("\n\n Digite o nome do usuário: ");
    scanf("%[^\n]", nomeUsuario);
    printf("Nome Usuário: %s", nomeUsuario);

    //não leu a ultima informação por lotação do buffer:
    //limpa apenas o "teclado" - sistema operacional
    fflush(stdin);
    // Entrada de texto usando fgets
    printf("\nDigite o endereco: ");
    fgets(endereco, 50, stdin);
    printf("Seu endereco e: %s", endereco);
}