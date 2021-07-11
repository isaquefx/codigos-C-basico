#include <iostream>
using namespace std;

int main() {
//Mini poker- verifica 'N' cartas representadas por uma letra. Se a mão possuir 5 cartas com copas ('c'), a mão é vencedora. 
int N;
char letra,saida;

int i;
int copas,outro;

copas=0;
outro=0;

cout<<"Quantidade de cartas: ";
cin>>N;


cout<<"Cartas(a-z): ";
i=1;
while (i<=N){

cin>>letra;

if (letra=='c'){
 copas=copas+1;
}else {
outro=outro+1;
}
i++;
}

if (copas == 5){
  cout<<"FLUSH!";
} else {
  cout<<"Não possui 5 cartas de copas na mão";
}


}



