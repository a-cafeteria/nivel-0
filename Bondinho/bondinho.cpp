// Bondinho
// problema disponível em https://neps.academy/lesson/126

#include <iostream>

int main(){
	int A, M; //váriaveis dos Alunos e Monitores
	cin>>A>>M//Pega o valor e adiciona nas varáveis, o cin desse jeito permite escanear 2 ou mais variaveis ao mesmo tempo poupando código
	if(A+M>50) //teste lógico
        	cout<<"N";//if de uma linha não precisa de estar entre chaves
    	else
        	cout<<"S"; //Se for maior é não, se for menor dá, logo é sim
    	return 0; //acaba a função
}
