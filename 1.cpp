#include <iostream>
using namespace std;



int main(){
	
	//Converter segundos p/ H,Min,S

   int N, horas, horas_seg, minutos, segundos;

   horas_seg=3600;

   cout<<"Digite o(s) segundo(s): ";
   cin>>N;

   horas = (N/horas_seg); 
   minutos = (N -(horas_seg*horas))/60;
   segundos = (N -(horas_seg*horas)-(minutos*60));
   
  cout<<horas<<"h "<<minutos<<"m "<<segundos<<"s ";
   

}
