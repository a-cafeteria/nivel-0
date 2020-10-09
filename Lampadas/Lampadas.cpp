//enunciado em  https://neps.academy/lesson/133

#include <iostream>
using namespace std;

int main(){
  int A=0,B=0,Inte,N;// A e B são as lampadas , que vão ter 1 pra acessa e 0 para apagadas, Inte é o interruptor e N é o laço
  cin >> N;

  for(N;N>0;N--){//No for não prescisa iniciar uma variavel nele, ela pode estar fora , pode somente coloca de parametro
    cin >> Inte;//igual a scanf, n precisa passar parametro como ("%d",&Inte), mas só é válido para C++
	//verifica se é o Interruptor 1 ou o 2
    if(Inte==1){
      if(A==0)
        A=1;
      else if(A==1)// quando possui mais de um teste lógico ligado um no outro é aconselhavel usar else if, pois assim já parte direto pra ele depois do if e não tem que ficar rodando tudo do 0
        A=0;
    }
	//Interruptor 2
    if(Inte==2){
      if(A==0 && B==0){
        A=1;
        B=1;
      }
      else if(A==0 && B==1){//mais de uma condição , aconselhavel else if , pois dessa forma se liga direto no if caso n deu certo
        A=1;
        B=0;
      }
      else if(A==1 && B==0){
        A=0;
        B=1;
      }
      else if(A==1 && B==1){
      	A=0;
      	B=0;
	  }
    }

  }
  cout << A << "\n" << B;//igual a printf, n precisa passar parametros , com "%d", somente válido para C++
  return 0;
}
