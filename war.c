#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//**constantes globais */
#define MAX_TERRITORIOS 5
#define TAM_STRING 100

//**definição da struct */
struct territorios {
    char nomecontinente[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
    
};

//**limpeza de buffer de entradas */
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//**Função principal/MAIN */
int main() {
    struct territorios continentes[MAX_TERRITORIOS];
    int i;

    printf("===========================================\n");
    printf("Vamos cadastrar os 5 territórios iniciais:\n");
    printf("===========================================\n");

//**Início do cadastro */
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Cadastrando Território %d ---\n", i + 1);
        
        printf("Nome do Continente: ");
        fgets(continentes[i].nomecontinente, TAM_STRING, stdin);
        continentes[i].nomecontinente[strcspn(continentes[i].nomecontinente, "\n")] = 0;

        printf("Cor do Território: ");
        fgets(continentes[i].cor, TAM_STRING, stdin);
        continentes[i].cor[strcspn(continentes[i].cor, "\n")] = 0;

        printf("Quantidade de Tropas: ");
        scanf("%d", &continentes[i].tropas);
        
        limparBufferEntrada(); //**limpeza de buffer de entrada */
    }
    printf("\n*** O cadastro dos territórios foi concluído com sucesso! ***\n\n"); //**Aviso de conclusão */

    //**Início da lista final com os dados após o preenchimento */
    printf("--------------------------------------------------\n");
    printf("              MAPA DO MUNDO ATUAL\n");
    printf("--------------------------------------------------\n");

    //**Exibe na tela o resumo final com os dados inseridos */
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTERRITÓRIO %d:\n", i + 1);
        printf("  > Continente: %s\n", continentes[i].nomecontinente);
        printf("  > Cor do Território: %s\n", continentes[i].cor);
        printf("  > Quantidade de Tropas: %d\n", continentes[i].tropas);
    
}
//**exibe na tela a mensagem de finalização */
    printf("\n--------------------------------------------------\n");
    printf("              BOM JOGO PRA VOCÊ!\n");
    printf("--------------------------------------------------\n");

    return 0;
}
