#include <stdio.h>

int main(){
    int A, B, troca; // declaração das variáveis para o problema, e uma variavel para realizar a troca

    A = 10;
    B = 20; //atribuição de valor às variáveis

    troca = A; //armazenamento do valor de A em uma variável para ser utilizada posteriormente
    A = B;     //atribuição de B em A
    B = troca; //atribuição de "troca" em B, para trocar o valor de B

    printf("O valor de A:%d \nO valor de B:%d", A, B);

    return 0;
}
