#include <iostream>
using namespace std;


int main() {

//N�meros do vetor ao contr�rio

int n,i;

cout<<"Digite a quantidade de posi��es do vetor: ";
cin>>n;
int vetorl[n];

cout<<"Digite os n�meros: "<<endl;

for(i=0;i<n;i++){
  
  cin>>vetorl[i];
}

for(i=(n-1);i>=0;i--){
  cout<<vetorl[i]<<" ";
}







}
