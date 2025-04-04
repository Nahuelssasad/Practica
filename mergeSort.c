#include <stdio.h>

//prototipos de funciones
void merge(int array[],int izq,int mid,int der);
void mergeSort(int array[],int izq,int der);


int main(void)
{

}
//definiendo las funciones

//union de submatrices a partir de array
//primer arreglo sera de 
void merge(int array[],int izq,int mid,int der)
{
    
    //variables que  comparen  las dos submatrices
    int i = izq;
    int j = mid+1;
    int k =izq;

    while((i < j) && (j<der))
    {
        
    }
    //
}

void mergeSort(int array[],int izq,int der)
{
    int mid = (izq+der)/2;
    mergeSort(array,izq,der);
    mergeSort(array,mid+1,izq);
    merge(array,izq,mid,der);

}
