#include<iostream>
using namespace std;

int main(){
	
	char letra;
	
	cout<<"Introduzca un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula."; break;
		default: cout<<"No es una vocal minuscula";
		
	}
}
