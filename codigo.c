#include <stdio.h>

//Declaracion de  las funciones

void merge(int A[],int lowerLimit,int mid,int upperLimit);

void mergeSort(int A[],int lowerLimit,int upperLimit);


int main(void)
{
    int array[10] = {0,1,3,8,7,10,64,5,5,28};
    mergeSort(array,0,9);
    for(int i = 0; i<10;i++)
    {
        printf("%i\n",array[i]);
    }
    


}
//definimos las funciones
void merge(int A[],int lowerLimit,int mid,int upperLimit)
{
    
    int lengthLeft = mid -lowerLimit +1;
    int lengthRight = upperLimit - mid;

    //submatrices que almacenaran los elementos

    int temp_left[lengthLeft];
    int temp_right[lengthRight];



    for(int i = 0; i < lengthLeft ; i++)
    {  
        temp_left[i] = A[lowerLimit+i];
    }
    for(int i = 0 ; i < lengthRight;i++)
    {
        temp_right[i]= A[mid+1+i];
    }

   // Copiamos los elementos a los arreglos temporales
   for(int i = 0; i < lengthLeft; i++) {
    temp_left[i] = A[lowerLimit + i];
}
for(int i = 0; i < lengthRight; i++) {
    temp_right[i] = A[mid + 1 + i];
}

// Combinamos los arreglos temporales en A[]
int i = 0, j = 0, k = lowerLimit;
while (i < lengthLeft && j < lengthRight) {
    if (temp_left[i] <= temp_right[j]) {
        A[k] = temp_left[i];
        i++;
    } else {
        A[k] = temp_right[j];
        j++;
    }
    k++;
}

// Copiamos los elementos restantes de temp_left (si hay)
while (i < lengthLeft) {
    A[k] = temp_left[i];
    i++;
    k++;
}

// Copiamos los elementos restantes de temp_right (si hay)
while (j < lengthRight) {
    A[k] = temp_right[j];
    j++;
    k++;
}
};

void mergeSort(int A[],int lowerLimit,int upperLimit) //rigth : Limite inferior ; Left : Limite superior
{
    if(lowerLimit < upperLimit)
    
    {

        int mid = lowerLimit + ( upperLimit- lowerLimit)/2;  //Nos posicionamos en el medio de la matriz
        mergeSort(A,lowerLimit,mid);  //Recursivamente vamos creando submatrices
        mergeSort(A,mid+1,upperLimit);
        merge(A,lowerLimit,mid,upperLimit); //Unimos las submatrices en una sola matriz ordenada


    }
    

} 