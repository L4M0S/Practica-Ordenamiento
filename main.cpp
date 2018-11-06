#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

#include"lista.h"

using namespace std;

int randseed()
{
	srand((unsigned)time(NULL));
}	

int main()
{
	randseed();

    int tam = rand() % 11 + 10;


    lista lambda1(tam, 10*tam);

    cout<<"Lista 1["<<lambda1.rlongitud()<<" elementos]\n";
    lambda1.print();
    
    lambda1.quicksort(lambda1, 0,tam-1);
    lambda1.print();
        
	cout<<endl<<"finalizado";
	cin.get();cin.get();
    return 0;
}
