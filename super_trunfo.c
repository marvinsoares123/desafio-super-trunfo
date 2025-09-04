#include <stdio.h>
#include <string.h>

// Define a estrutura para uma carta
struct Carta {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
};

// Função para mostrar atributos da carta
void mostrarCarta(struct Carta c) {
    printf("\nCarta: %s\n", c.nome);
    printf("Força: %d\n", c.forca);
    printf("Velocidade: %d\n", c.velocidade);
    printf("Inteligência: %d\n", c.inteligencia);
}

int main() {
    struct Carta carta1 = {"Leão Valente", 85, 60, 70};
    struct Carta carta2 = {"Águia Rápida", 70, 90, 65};

    int escolha;

    printf("=== Bem-vindo ao Super Trunfo Personalizado ===\n");
    mostrarCarta(carta1);
    mostrarCarta(carta2);

    printf("\nEscolha o atributo para batalha:\n");
    printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &escolha);

    printf("\nResultado da batalha:\n");

    switch (escolha) {
        case 1:
            if (carta1.forca > carta2.forca)
                printf("%s venceu por FORÇA!\n", carta1.nome);
            else if (carta2.forca > carta1.forca)
                printf("%s venceu por FORÇA!\n", carta2.nome);
            else
                printf("Empate na FORÇA!\n");
            break;

        case 2:
            if (carta1.velocidade > carta2.velocidade)
                printf("%s venceu por VELOCIDADE!\n", carta1.nome);
            else if (carta2.velocidade > carta1.velocidade)
                printf("%s venceu por VELOCIDADE!\n", carta2.nome);
            else
                printf("Empate na VELOCIDADE!\n");
            break;

        case 3:
            if (carta1.inteligencia > carta2.inteligencia)
                printf("%s venceu por INTELIGÊNCIA!\n", carta1.nome);
            else if (carta2.inteligencia > carta1.inteligencia)
                printf("%s venceu por INTELIGÊNCIA!\n", carta2.nome);
            else
                printf("Empate na INTELIGÊNCIA!\n");
            break;

        default:
            printf("Atributo inválido. Reinicie o jogo e tente novamente.\n");
    }

    return 0;
}
