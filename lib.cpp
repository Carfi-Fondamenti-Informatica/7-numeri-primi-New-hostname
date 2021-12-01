#include "lib.h"

bool primo(int n, int c)
{
  if(n == 1)
  {
    return false;
  }
  if(n % c == 0)
  {
    return false;
  }
  else
  {
    c++
    
    if(c == n)
    {
      return true;
    }
    else
    {
      primo(n, c);
    }
  }
}
