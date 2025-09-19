#include <stdio.h>
void main(void) {
    int vet[5];
    int I;
    printf("Digite 5 números:");
    for(j = 0; j < 5; j++) {
        scanf("%d", &vet[j]);
    }
    for(j = 0; j < 5; j++) {
        printf("%d ", vet[j]);
    }
    printf("Digite o indice pra remover:");
    scanf("%d", &I);
    for( j = I; j < 4; j++) {
        vet[j] = vet[j+1];
    }
    vet[4] = 0;
    for(j = 0; j < 5; j++) {
        printf("%d ", vet[j]);
    }
}
