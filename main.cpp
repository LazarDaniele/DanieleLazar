#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

/* Punto 1 del libro
-dare la scelta di quanti bits trasmettere (da 8 a 32)
-generare uans sequenza random di bits da trasmettere
-stampare i dati origianli e il polinomio M(x) */

using namespace std;
int main() {
 int numerobits, c;
 cout<<"inserire quanti bits da trasmettere (8 a 32) :";
 cin>>numerobits;
 cout<<"numero di bits:  "<<numerobits<<endl;
 
 for(int i=0; i<numerobits; i++){
 	int c=rand() % 2;
 	cout<<c;
 }
 
}
