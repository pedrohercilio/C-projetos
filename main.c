#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);  // força UTF-8 no terminal

    printf("Olá, mundo!\n");
    printf("Como q tá?\n");

    int a, b, c, d, e, soma, produto;
    printf("Digite 5 números pelo teclado: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    soma = a + b + c + d + e;
    produto = a * b * c * d * e;
    
    printf("A soma dos números é: %d.\n", soma);
    printf(" o produto dos números é: %d.\n", produto);

    return 0;
}