#include <stdio.h>

int main() {
    int numero;
  
    printf("Digite um número: ");
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    printf("Tabuada de multiplicação de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    printf("Próximos três números com contagem de dois em dois:\n");
    for (int i = numero + 2, contagem = 0; contagem < 3; i += 2, contagem++) {
        printf("%d\n", i);
    }

    return 0;
}
