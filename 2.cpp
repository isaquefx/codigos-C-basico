#include <iostream>
using namespace std;

int main() {
	
	//Inverter a ordem de 3 números inteiros

int N,a=0,b=0,u=0;

cout<<"Digite 3 números inteiros (juntos): ";
cin>>N;

a=N /100;

b=(N%100)/10;

u=N %10;

cout<<u<<b<<a;

}
