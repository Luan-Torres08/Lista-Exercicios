#include <stdio.h>
#include <string.h>
#define CAPACIDADE 20

int main() {
    int idProduto[CAPACIDADE];
    char descricao[CAPACIDADE][50];
    float valor[CAPACIDADE];
    int estoque[CAPACIDADE];

    int qtdCadastrados = 0;
    int escolha;
    int idProcurado, idx, idx2, achou;

    do {
        printf("\n--- SISTEMA DE CADASTRO DE PRODUTOS ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("3 - Listar\n");
        printf("4 - Alterar\n");
        printf("5 - Excluir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &escolha) != 1) {
            while (getchar() != '\n');
            escolha = -1;
        }

        switch (escolha) {
            case 1:
                if (qtdCadastrados < CAPACIDADE) {
                    printf("\n--- Novo Cadastro (Posicao %d) ---\n", qtdCadastrados + 1);
                    printf("Codigo: ");
                    scanf("%d", &idProduto[qtdCadastrados]);

                    printf("Nome: ");
                    scanf(" %[^\n]", descricao[qtdCadastrados]);

                    printf("Preco: ");
                    scanf("%f", &valor[qtdCadastrados]);

                    printf("Quantidade: ");
                    scanf("%d", &estoque[qtdCadastrados]);

                    qtdCadastrados++;
                    printf("Cadastro realizado com sucesso!\n");
                } else {
                    printf("\nLimite maximo de cadastros atingido.\n");
                }
                break;

            case 2:
                printf("\n--- Consultar Produto ---\n");
                printf("Digite o codigo procurado: ");
                scanf("%d", &idProcurado);
                achou = 0;

                for (idx = 0; idx < qtdCadastrados; idx++) {
                    if (idProduto[idx] == idProcurado) {
                        printf("\nRegistro Encontrado:\n");
                        printf("Codigo: %d\n", idProduto[idx]);
                        printf("Nome: %s\n", descricao[idx]);
                        printf("Preco: %.2f\n", valor[idx]);
                        printf("Quantidade: %d\n", estoque[idx]);
                        achou = 1;
                        break;
                    }
                }

                if (achou == 0) {
                    printf("\nRegistro nao encontrado.\n");
                }
                break;

            case 3:
                printf("\n--- Lista de Produtos ---\n");
                if (qtdCadastrados == 0) {
                    printf("Nenhum registro cadastrado.\n");
                } else {
                    for (idx = 0; idx < qtdCadastrados; idx++) {
                        printf("Codigo: %d | Nome: %s | Preco: R$ %.2f | Quantidade: %d\n",
                               idProduto[idx], descricao[idx], valor[idx], estoque[idx]);
                    }
                    printf("Total de registros: %d\n", qtdCadastrados);
                }
                break;

            case 4:
                printf("\n--- Alterar Produto ---\n");
                printf("Digite o codigo do produto que deseja alterar: ");
                scanf("%d", &idProcurado);
                achou = 0;

                for (idx = 0; idx < qtdCadastrados; idx++) {
                    if (idProduto[idx] == idProcurado) {
                        printf("Produto encontrado. Insira os novos dados:\n");

                        printf("Novo Codigo: ");
                        scanf("%d", &idProduto[idx]);

                        printf("Novo Nome: ");
                        scanf(" %[^\n]s", descricao[idx]);

                        printf("Novo Preco: ");
                        scanf("%f", &valor[idx]);

                        printf("Nova Quantidade: ");
                        scanf("%d", &estoque[idx]);

                        printf("Registro alterado com sucesso!\n");
                        achou = 1;
                        break;
                    }
                }

                if (achou == 0) {
                    printf("\nRegistro nao encontrado.\n");
                }
                break;

            case 5:
                printf("\n--- Excluir Produto ---\n");
                printf("Digite o codigo do produto que deseja excluir: ");
                scanf("%d", &idProcurado);
                achou = 0;

                for (idx = 0; idx < qtdCadastrados; idx++) {
                    if (idProduto[idx] == idProcurado) {
                        for (idx2 = idx; idx2 < qtdCadastrados - 1; idx2++) {
                            idProduto[idx2] = idProduto[idx2 + 1];
                            strcpy(descricao[idx2], descricao[idx2 + 1]);
                            valor[idx2] = valor[idx2 + 1];
                            estoque[idx2] = estoque[idx2 + 1];
                        }
                        qtdCadastrados--;
                        printf("Registro excluido com sucesso!\n");
                        achou = 1;
                        break;
                    }
                }

                if (achou == 0) {
                    printf("\nNao foi possivel excluir. Registro nao encontrado.\n");
                }
                break;

            case 0:
                printf("\nEncerrando o sistema. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (escolha != 0);
}
