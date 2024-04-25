#include <stdio.h>
#include "fibonacci.h"

unsigned int Fibonacci(unsigned int n)
{
  if (n==0 || n==1)
  {
    return n;
  }else
  {
    return Fibonacci(n-1) + Fibonacci(n-2);
  }
}

unsigned int FibonacciByIteration(unsigned int n)
{
  if (n==0 || n==1)
  {
      return n;
  }else
  {
      unsigned int last=0;
      unsigned int current=1;
      unsigned int temp;
      for(int i=0; i<n-1;i++)
      {
          temp = current;
          current += last;
          last = temp;
      }
      return current;
  }
}
