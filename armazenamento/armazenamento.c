#include <stdio.h>

int main(){
    int A, B, troca; // declara��o das vari�veis para o problema, e uma variavel para realizar a troca

    A = 10;
    B = 20; //atribui��o de valor �s vari�veis

    troca = A; //armazenamento do valor de A em uma vari�vel para ser utilizada posteriormente
    A = B;     //atribui��o de B em A
    B = troca; //atribui��o de "troca" em B, para trocar o valor de B

    printf("O valor de A:%d \nO valor de B:%d", A, B);

    return 0;
}
