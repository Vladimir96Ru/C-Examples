//
//  main.cpp
//  Operand Lab №2-6.1-12
//
//  Created by Vladimir Solobuev on 26.06.14.
//  Copyright (c) 2014 Vladimir Solobuev. All rights reserved.
//

#include <iostream>
#include <math.h>

float F1( float x )
{
    if( x >= 0 )
        return exp( sin( x ) );
    else
        return exp( cos( x ) );
}

float F2( float x )
{
    return exp( x >= 0 ? sin( x ) : cos( x ) );
}

int main(int argc, const char * argv[])
{
    float x = 1.0;
    std::cout << "F1: " << F1( x ) << std::endl;
    std::cout << "F2: " << F2( x ) << std::endl;
    return 0;
}

