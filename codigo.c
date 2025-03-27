#include <stdio.h>

int main(void)
{
    
    int matriz [] = {4,5,8,12};
    //aplicamos busqueda binaria para ordenar los elementos
    
    for(int i = 0;i<4;i++)
    {
       
        int temp = 0;
        for(int j = 0;j < 4 ; j++)
        {
            if(matriz[j] > matriz[j+1])
            {
                temp = matriz[j];
                matriz[j] = matriz[j+1];
                matriz[j+1] = temp;
              
            }
            
        }
    }

    //imrpimiendo lista ordenada a traves del metodo bubble sort
    for(int j = 0 ; j<4;j++)
    {
        printf("%i ",matriz[j]);
    }


}