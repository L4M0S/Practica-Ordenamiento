#ifndef LISTA_H
#define LISTA_H

class lista
{
        int *array;
        int longitud;
        int rango;
        
        int i,j,pivot;
        //int k;

        



    public:

        lista(int, int);
        ~lista();


        void genrand();
        void print();
        int rlongitud();
        
        void quicksort(lista, int, int);
        
};
#endif
