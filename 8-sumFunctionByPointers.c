// program of Function that sums values by refrencing pointers
//

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int* pointerToA;
    int* pointerToB;

    int total;

    int Sum(int* a, int* b);

    pointerToA = &a;
    pointerToB = &b;

    

    printf("a = %i is in memory address %p\n", a, &a);
    printf("b = %i is in memory address %p\n", *pointerToB, pointerToB);

    total = Sum(pointerToA, pointerToB);

    printf("sum = %i\n", total);
   
 
    return 0;
}

int Sum(int* a, int* b)
{
    return *a + *b;
}
