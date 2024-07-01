#include <stdio.h>
#include <stdlib.h>
#define N 10 

/*
* sorted_square_array - function that takes a array as input 
* and return the a new squared array in ascending order
* @array: the array
* Return: the new array
*/
int *sorted_square_array(int *array, int lenght){
    int *new_array = (int*)(malloc(sizeof(int) * lenght));
    int i, j = 0;

    while (array[i]){
        new_array[j] = array[i] * array[i];
        i++;
        j++;
    }
    return new_array;
}


int main() {

    int array[] = {1,5,6};
    int lenght = sizeof(array) / sizeof(array[0]);
    int *new_array2 = sorted_square_array(array, lenght);
    int i = 0;

    while(i<lenght){
        printf("%d\n", new_array2[i]);
        i++;
    }
}