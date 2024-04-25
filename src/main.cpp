#include <stdio.h>
#include "factorial.h"
#include "fibonacci.h"

int main(void)
{
    printf("%d\n",Factorial(3));
    printf("%d\n",FactorialByIteration(3));
    printf("%d\n",Fibonacci(3));
    printf("%d\n",FibonacciByIteration(3));
    return 0;
}