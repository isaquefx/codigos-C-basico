#include <iostream>
using namespace std;


int main() {
//contar a quantidade de 1 e 0
int n,s,i,mx=0,fx=0;

cin>>n;

while(n>0){
  cin>>s;

  if (s==1){
    mx++;
  }

  if (s==0){
  fx++;
  }

   n--;
  
}
cout<<"A quantidade de números '1' é: "<<mx<<endl;
cout<<"A quantidade de números '0' é: "<<fx;


}
