#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int lerInt(char *msg) {
    char linha[100];
    int valor;
    while (1) {
        printf("%s", msg);
        if (fgets(linha, sizeof(linha), stdin) == NULL)
            exit(0);
        if (sscanf(linha, "%d", &valor) == 1)
            return valor;
        printf("Valor invalido. Digite um numero inteiro.\n");
    }
}

float lerFloat(char *msg) {
    char linha[100];
    float valor;
    int i;
    while (1) {
        printf("%s", msg);
        if (fgets(linha, sizeof(linha), stdin) == NULL)
            exit(0);
        for (i = 0; linha[i] != '\0'; i++)
            if (linha[i] == ',')
                linha[i] = '.';
        if (sscanf(linha, "%f", &valor) == 1)
            return valor;
        printf("Valor invalido. Digite um numero (ex.: 59.90).\n");
    }
}

void lerTexto(char *msg, char *destino) {
    char linha[100];
    while (1) {
        printf("%s", msg);
        if (fgets(linha, sizeof(linha), stdin) == NULL)
            exit(0);
        linha[strcspn(linha, "\r\n")] = '\0';
        if (strlen(linha) > 0) {
            strncpy(destino, linha, 49);
            destino[49] = '\0';
            return;
        }
        printf("O texto nao pode ficar vazio.\n");
    }
}

int main() {
    int codigo[MAX], quantidade[MAX], total = 0, opcao, i, codigoBusca, posicao;
    char nome[MAX][50];
    float preco[MAX];

    do {
        printf("\n===== SISTEMA DE CADASTRO =====\n1 - Cadastrar\n2 - Consultar\n3 - Listar\n4 - Alterar\n5 - Excluir\n0 - Sair\n");
        opcao = lerInt("Escolha uma opcao: ");

        posicao = -1;
        if (opcao == 1 || opcao == 2 || opcao == 4 || opcao == 5) {
            codigoBusca = lerInt("Codigo: ");
            for (i = 0; i < total; i++)
                if (codigo[i] == codigoBusca)
                    posicao = i;
        }

        switch (opcao) {
            case 1:
                if (total >= MAX)
                    printf("\nLimite maximo de cadastros atingido.\n");
                else if (posicao != -1)
                    printf("\nJa existe um produto com esse codigo.\n");
                else {
                    codigo[total] = codigoBusca;
                    lerTexto("Nome: ", nome[total]);
                    preco[total] = lerFloat("Preco: ");
                    quantidade[total] = lerInt("Quantidade: ");
                    total++;
                    printf("\nProduto cadastrado com sucesso! Total: %d\n", total);
                }
                break;

            case 2:
                if (posicao == -1)
                    printf("\nRegistro nao encontrado.\n");
                else
                    printf("\nCodigo: %d\nNome: %s\nPreco: %.2f\nQuantidade: %d\n",
                           codigo[posicao], nome[posicao], preco[posicao], quantidade[posicao]);
                break;

            case 3:
                if (total == 0)
                    printf("\nNenhum registro cadastrado.\n");
                for (i = 0; i < total; i++)
                    printf("\nCodigo: %d\nNome: %s\nPreco: %.2f\nQuantidade: %d\n",
                           codigo[i], nome[i], preco[i], quantidade[i]);
                break;

            case 4:
                if (posicao == -1)
                    printf("\nRegistro nao encontrado.\n");
                else {
                    lerTexto("Novo nome: ", nome[posicao]);
                    preco[posicao] = lerFloat("Novo preco: ");
                    quantidade[posicao] = lerInt("Nova quantidade: ");
                    printf("\nProduto alterado com sucesso!\n");
                }
                break;

            case 5:
                if (posicao == -1)
                    printf("\nNao foi possivel excluir.\n");
                else {
                    for (i = posicao; i < total - 1; i++) {
                        codigo[i] = codigo[i + 1];
                        strcpy(nome[i], nome[i + 1]);
                        preco[i] = preco[i + 1];
                        quantidade[i] = quantidade[i + 1];
                    }
                    total--;
                    printf("\nProduto excluido com sucesso!\n");
                }
                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
