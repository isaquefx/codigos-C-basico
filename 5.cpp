#include <iostream>
using namespace std;


int main() {

//Números do vetor ao contrário

int n,i;

cout<<"Digite a quantidade de posições do vetor: ";
cin>>n;
int vetorl[n];

cout<<"Digite os números: "<<endl;

for(i=0;i<n;i++){
  
  cin>>vetorl[i];
}

for(i=(n-1);i>=0;i--){
  cout<<vetorl[i]<<" ";
}







}
