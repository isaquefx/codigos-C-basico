#include <iostream>

using namespace std;
//Ordenar as posições do vetor em ordem crescente 

int main() {
  int i, j, n,menor,aux;
  cout<<"Digite a quantidade de posições do vetor: ";
  cin>>n;
  int vetor[n];

cout<<"Digite os valores do vetor: ";
  for(i=0;i<n;i++){
    cin>>vetor[i];
  }

for(i=0;i<(n-1);i++){
  menor=i;
  for(j=i+1;j<n;j++){
    if(vetor[j]<vetor[menor]){
     menor=j;
     }
  }

aux=vetor[i];
vetor[i]=vetor[menor];
vetor[menor]=aux;
}

cout<<"Vetor ordenado:"<<endl;

for (i=0;i<n;i++){
  cout<<vetor[i]<<" ";

}




  
}
