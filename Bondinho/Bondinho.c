#include <stdio.h>

int main(){
	int A,M;//váriaveis dos Alunos e Monitores
	scanf("%d%d",&A,&M);//Pega o valor e adiciona nas varaáveis, o scanf desse jeito permite escanear 2 variaveis
	if(A+M>50)//teste lógico
        printf("N");//if de uma linha não precisa de estar entre chaves
    else
        printf("S");//Se for maior é não , se for menor dá, logo é sim
    return 0;//acaba a função
}
