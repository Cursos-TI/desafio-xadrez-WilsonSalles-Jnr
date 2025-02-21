#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Variáveis criadas para padronizar nomes dos movimentos
    char CIMA[6] = "Cima\n";
    char BAIXO[7] = "Baixo\n";
    char ESQUERDA[10] = "Esquerda\n";
    char DIREITA[9] = "Direita\n";
    // Movimentação máxima
    int bispoMax = 5;
    int torreMax = 5;
    int rainhaMax = 8;
    // Opções disponíveis: [1, 2, 3]
    int opcao;
    // Caso nenhuma opção disponível for escolhida corretamente, a variável se tornará verdadeira, fazendo repertir o loop pai
    int opcaoInvalida;

    // Print de inicialização, estão foras do loop para não repetir a mesma mensagem
    printf("Selecione uma das peças para movimentar\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");

    do
    {
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            // Movimento bispo, 5 casas para direita e 5 casas para cima
            opcao = 0;
            for (int i = 0; i < bispoMax; i++)
            {
                printf(CIMA);
                printf(DIREITA);
            }
            break;
        case 2:
            // Movimento torre, 5 casas para a direita
            opcao = 0;
            for (int i = 0; i < torreMax; i++)
            {
                printf(DIREITA);
            }
            break;
        case 3:
            // Movimento rainha, 8 casas para a esquerda
            opcao = 0;
            int passosRainha = 0;
            while (passosRainha < rainhaMax)
            {
                printf(ESQUERDA);
                passosRainha++;
            }
            break;
        default:
            // Caso nenhuma das opções anteriores forem selecionadas, a opcaoInvalida se torna verdadeira
            opcaoInvalida = 1;
            printf("Opção inválida, escolha uma das 3 opções\n");
            break;
        };
    } while (opcao);
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
