#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese"); // Configura o locale para Português

    int rainha, bispo, torre, escolha, direcao, casas; // Variáveis para as peças e escolhas
    rainha = 1;
    bispo = 2;
    torre = 3;
    
    do
    {
        printf("Digite 1 (Rainha), 2 (Bispo) ou 3 (Torre) para mover: "); // Solicita a escolha da peça
        scanf("%d", &escolha);

    } while (escolha != rainha && escolha != bispo && escolha != torre); // Valida a escolha

    if (escolha == rainha) {
        printf("Você escolheu a Rainha.\n");
        printf("A Rainha pode se mover em qualquer direção.\n");
        printf("Escolha a direção:\n");
        // Informa as direções possíveis
        printf("1 - Para frente\n2 - Para trás\n3 - Para a esquerda\n4 - Para a direita\n5 - Diagonal para frente-esquerda\n6 - Diagonal para frente-direita\n7 - Diagonal para trás-esquerda\n8 - Diagonal para trás-direita\n");
        // Solicita a direção
        scanf("%d", &direcao); 
        // Valida a direção escolhida
        if (direcao >= 1 && direcao <= 8) {
            printf("Quantas casas deseja mover? (1 a 8): ");
            // Solicita a quantidade de casas
            scanf("%d", &casas);
            // Valida a quantidade de casas
            if (casas >= 1 && casas <= 8) {
                printf("Movimento válido para a Rainha. Rainha se moveu %d casas.\n", casas);
                // Exibe o movimento feito
            } else {
                printf("Quantidade de casas inválida.\n");
                // Informa que a quantidade de casas é inválida
            }
        } else {
            printf("Direção inválida para a Rainha.\n");
        }
    } else if (escolha == bispo) {
        printf("Você escolheu o Bispo.\n");
        printf("O Bispo só pode se mover nas diagonais.\n");
        printf("Escolha a direção:\n");
        printf("1 - Diagonal para frente-esquerda\n2 - Diagonal para frente-direita\n3 - Diagonal para trás-esquerda\n4 - Diagonal para trás-direita\n");
        scanf("%d", &direcao);
        if (direcao >= 1 && direcao <= 4) {
            printf("Quantas casas deseja mover? (1 a 8): ");
            scanf("%d", &casas);
            if (casas >= 1 && casas <= 8) {
                printf("Movimento válido para o Bispo. Bispo se moveu %d casas.\n", casas);
            } else {
                printf("Quantidade de casas inválida.\n");
            }
        } else {
            printf("Direção inválida para o Bispo.\n");
        }
    } else if (escolha == torre) {
        printf("Você escolheu a Torre.\n");
        printf("A Torre só pode se mover para frente, para trás e para os lados.\n");
        printf("Escolha a direção:\n");
        printf("1 - Para frente\n2 - Para trás\n3 - Para a esquerda\n4 - Para a direita\n");
        scanf("%d", &direcao);
        if (direcao >= 1 && direcao <= 4) {
            printf("Quantas casas deseja mover? (1 a 8): ");
            scanf("%d", &casas);
            if (casas >= 1 && casas <= 8) {
                printf("Movimento válido para a Torre. Torre  %d casas.\n", casas);
            } else {
                printf("Quantidade de casas inválida.\n");
            }
        } else {
            printf("Direção inválida para a Torre.\n");
        }
    }

    return 0;
}