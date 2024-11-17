#include <stdio.h>

int main() {
    printf("Bem vido ao jogo");

    int numerosecreto;
    int chute;
    numerosecreto=42;

    printf("digite um numero: ");
    scanf("%d", &chute);
    printf("você digitou o  numero%d", chute);

    if (chute == numerosecreto)
    {
        printf("parabéns, você acertou!!");
    } else
    {
        printf("você errou");
    }
    
    

}