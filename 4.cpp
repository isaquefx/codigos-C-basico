#include <iostream>
#include <string>

using namespace std;

int main() {

//Verificar se a palavra � um pal�ndromo

string str;
bool x=true;
cout<<"Digite a palavra: ";
cin>>str;
int t= str.size();

for(int i=0;i<str.size();i++){
if (str[i] != str[t-1-i]){
x=false;
break;
  }
}

if(x==true){
cout<<"A palavra "<<"'"<< str<<"'"<<" � um pal�ndromo"<<endl;
}else{
  cout<<"A palavra "<<"'"<< str<<"'"<<" n�o � um pal�ndromo"<<endl;
}




}
