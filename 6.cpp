#include <iostream>
using namespace std;

int main() {

  //Subtra��o de matrizes
 int i,j;
 int l,c;

 cout<<"Digite a quantidade de linhas da matriz: ";
 cin>>l;
 cout<<"Digite a quantidade de colunas da matriz: ";
 cin>>c;

 int matriz1[l][c],matriz2[l][c],soma[l][c];
 
cout<<"Digite os n�meros da primeira matriz: "<<endl;

for( i=0;i<l;i++){
  for(j=0;j<c;j++){
    cin>>matriz1[i][j];
  }
}
cout<<"Digite os n�meros da segunda matriz: "<<endl;
for( i=0;i<l;i++){
  for(j=0;j<c;j++){
    cin>>matriz2[i][j];
  }
}

for( i=0;i<l;i++){
  for(j=0;j<c;j++){
   soma[i][j]=matriz1[i][j]-matriz2[i][j];
  }
}

cout<<"O resultado da subtra��o das matrizes �: "<<endl;
for(int i=0;i<l;i++){
  for(j=0;j<c;j++){
   cout<<soma[i][j]<<" ";
  }
  cout<<endl;
}


}
