
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void stampa_vettore(int h, int array[]){
for(int i=0; i<h; i++){
cout<<"\n\nCasella ["<<i<<"] :";
cout<<array[i];
}
}

int main(){
int g=20;
int min;
int tmp;
int vettore[g];
for(int i=0; i<g; i++){
vettore[i]=(rand()%20)+0;
}
srand((unsigned)time(0));
stampa_vettore(g, vettore);

//Ordinamento BubbleSort
for (int j = 0; j < g; j++ )
{

for (int i=g-1; i>=j; i--)
 {
 if (vettore[i]>vettore[i+1])
   {
   tmp = vettore[i];
   vettore[i] = vettore[i+1];
   vettore[i+1] = tmp;
   }
 }

}
cout<<"\n\n-------------BUBBLE SORT--------------\n\n";
stampa_vettore(g, vettore);

}
