//
//  main.cpp
//  Armstrong Lab №1-1-12
//
//  Created by Vladimir S. on 20.06.14.
//  Copyright (c) 2014 Vladimir S. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
  const unsigned int inta = 10;
  const unsigned int intb = 999;
  unsigned int i,j,p,a,b,c,d,a1,b1,c1,d1;
    std::cout << "Armstrong numbers on the interval: " << inta << " - " << intb << std::endl;
    for( i = inta; i <= intb; i++ )
    {
      if( i < 100 ) p = 2;
      else if( i < 1000 ) p = 3;
      else p = 4;
      a = i/1000;
      b = i/100%10;
      c = i/10%10;
      d = i%10;
      a1 = 1; b1 = 1; c1 = 1; d1 = 1;
      for( j = 1; j <= p; j++ )
      {
        a1 = a1*a;
        b1 = b1*b;
        c1 = c1*c;
        d1 = d1*d;
      }
        if( a1+b1+c1+d1 == i ) std::cout << i << std::endl;
    }
  return 0;
}
