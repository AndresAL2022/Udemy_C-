#include<iostream>
using namespace std;

int main(){
	
	int x, y, aux;
	
	cout<<"Introduzca el valor de x: "; cin>>x;
	cout<<"Introduzca el valor de y: "; cin>>y;
	
	aux =x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"\nEl nuevo valor de y es: "<<y<<endl;

	return 0;
}
