#include <stdio.h>
#include "exercises.h"

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    printf("Suma de elementos: %d\n", calcSum(arr1, 5));
    
    // Prueba para findMax
    printf("Máximo valor: %d\n", findMax(arr1, 5));
    
    // Prueba para calcAverage
    printf("Promedio: %.2f\n", calcAverage(arr1, 5));
    
    // Prueba para countEvens
    int arr2[] = {2, 3, 4, 5, 6, 7, 8};
    printf("Números pares: %d\n", countEvens(arr2, 7));
    
    // Prueba para sumFirstLast
    printf("Suma primero y último: %d\n", sumFirstLast(arr1, 5));
    
    // Prueba para findMin
    printf("Mínimo valor: %d\n", findMin(arr1, 5));
    
    // Prueba para subtractArraysSum
    int a[] = {10, 20, 30};
    int b[] = {1, 2, 3};
    printf("Suma de diferencias: %d\n", subtractArraysSum(a, b, 3));
    
    // Prueba para mergeArraysSum
    int c[] = {1, 2};
    int d[] = {3, 4, 5};
    printf("Suma de arreglos fusionados: %d\n", mergeArraysSum(c, 2, d, 3));
    
    // Prueba para productArray
    int e[] = {1, 2, 3, 4};
    printf("Producto de elementos: %d\n", productArray(e, 4));
    
    // Prueba para calcSumAverage
    int sum;
    float avg;
    calcSumAverage(arr1, 5, &sum, &avg);
    printf("Suma: %d, Promedio: %.2f\n", sum, avg);
    

    return 0;
}
