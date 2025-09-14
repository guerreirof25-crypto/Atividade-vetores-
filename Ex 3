#include <stdio.h>
const int L = 3;
const int C = 4; 
void preenche(int arr[L][C], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite o valor para arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
float media(int arr[L][C], int l, int c) {
    int soma = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            soma += arr[i][j];
        }
    }
    return (float)soma / (l * c);
}
void main(void) {
    int arr[L][C];
    preenche(arr,L,C);
    float m = media(arr, L, C);
    printf("A média dos valores do array é: %.2f\n", m);
}
