#include <iostream>


using namespace std;

int main() {

// Somar as primeiras posi��es do vetor e dizer se � um n�mero par ou �mpar
int N,i,P;

cout<<"Digite a quantidade de posi��es do vetor: ";
cin>>N;

int vetor[N];


cout<<"Digite os valores do vetor: ";
for(i=0;i<N;i++){
  cin>>vetor[i];
}

cout<<"Somar os ... primeiros valores do vetor: ";
cin>>P;

int soma,K;


for (i=0;i<P;i++){



K= vetor[i];

soma= soma+K;



}

if (soma % 2 == 0){
  cout<<"A soma dos primeiros "<<P<<" valores resultam no n�mero "<<soma<<" ,que � par!";

}else{
  cout<<"A soma dos primeiros "<<P<<" valores resultam no n�mero "<<soma<<" ,que � �mpar!";



}






}



