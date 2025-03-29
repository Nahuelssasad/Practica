#include <stdio.h>

#define  CAPACITY  50 
typedef struct queues
{
    int matriz[CAPACITY];
    int size;
} queues;

int main(void)
{
    //declarando una estructura tipo queues
    queues people  ;
    people.matriz[0] = 80;
    printf("%d",people.matriz[0]);
}