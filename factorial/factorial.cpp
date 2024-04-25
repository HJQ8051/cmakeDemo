#include <stdio.h>
#include "factorial.h"

unsigned int Factorial(unsigned int n)
{
  if(n==0)
  {
    return 1;
  }else
  {
    return n * Factorial(n-1);
  }
}

unsigned int FactorialByIteration(unsigned int n)
{
    unsigned int result = 1;
    unsigned int i;
    for(i=n;i>0;i--)
    {
        result*=i;
    }
    return result;
}