#include <iostream>


using namespace std;

int main() {

// Somar as primeiras posições do vetor e dizer se é um número par ou ímpar
int N,i,P;

cout<<"Digite a quantidade de posições do vetor: ";
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
  cout<<"A soma dos primeiros "<<P<<" valores resultam no número "<<soma<<" ,que é par!";

}else{
  cout<<"A soma dos primeiros "<<P<<" valores resultam no número "<<soma<<" ,que é ímpar!";



}






}



