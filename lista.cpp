#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

#include"lista.h"

using namespace std;


lista::lista(int l, int r)
{
    longitud = l;				//LONGITUD DEL ARREGLO DE LA LISTA
    rango= r;				//RANGO DE VALORES DEL ARREGLO DE LA LISTA
    array = new int[longitud];	//CREANDO EL ARREGLO DE LA LISTA

    genrand();					//GENERAMOS VALORES DE LA LISTA
}

lista::~lista()
{
    delete[] array;
}

void lista::genrand()			//GERERAR VALOSRE PARA LA LISTA
{
	for(int i=0; i<longitud; i++)
	{
		array[i] = rand()%rango+1;
	}
}

void lista::print()			//IMPRIMIR VALORES DE LA LISTA
{
    for(int i=0; i<longitud; i++) cout<<"-"<<array[i]<<"-";
    
    cout<<endl;
}

int lista::rlongitud()		//LONGITUD DE LA LISTA
{
	return longitud;
}

///////////QUICKSORT//////////////////////////////
void lista::quicksort(lista qlambda, int left, int right)
{
	
	pivot=array[(left+right)/2];
	i=left;
	j=right;
		
	do
	{
		while(array[i]<pivot) i++;
		while(pivot<array[j]) j--;
		
		if(i<=j)
		{
			int aux = array[i];
			array[i]=array[j];
			array[j]=aux;
			i++;
			j--;
		}
	}while(i<=j);
	
	if(left<j) quicksort(qlambda,left,j);
	if(i<right) quicksort(qlambda,i,right);
}

