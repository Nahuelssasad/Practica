#include <stdio.h>

//Declaracion de  las funciones

merge(int A[],int lowerLimit,int mid,int upperLimit)
{
    //Declaracion y definicions  de los  punteros para comparar las submatrices
    int i = lowerLimit;
    int j = mid+1;
    int k = lowerLimit;

    int arrayAuxiliar[upperLimit+1];

    //Comparando elementos de las submatrices
    while((i < mid) && (j < upperLimit))
    {

        ifA[i] <= A[j]
        {
            arrayAuxiliar[k] = A[i];
        }

        else{

        }
        k++;


    }

     




};

void mergeSort(int A[],int lowerLimit,int upperLimit) //rigth : Limite inferior ; Left : Limite superior
{
    int mid = (lowerLimit + upperLimit)/2;  //Nos posicionamos en el medio de la matriz
    mergeSort(A,lowerLimit,mid);  //Recursivamente vamos creando submatrices
    mergeSort(A,mid+1,upperLimit);
    merge(A,lowerLimit,mid,upperLimit); //Unimos las submatrices en una sola matriz ordenada

} 

int main(void)
{


}