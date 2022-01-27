#include <iostream>

using namespace std;

int main() {
	
	int n;
	
	string b;

	b="";
	
	cout<<"Inserisci un numero decimale: ";
	
	cin>>n;
	
	while (n>0) {
		
		if (n%2==0)
			b='0'+b;
	
		else
			b='1'+b;
		n=n/2;
	}
	
	cout<<"Numero decimale convertito in binario: ";
	
	cout<<b;		

}
