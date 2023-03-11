//
//  main.cpp
//  EPS Lab №1-2-12
//
//  Created by Vladimir S. on 26.06.14.
//  Copyright (c) 2014 Vladimir S. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    float eps = 0.001;
    float ykp = 0.0;
    for( unsigned k = 1; k < 100; k++ )
    {
        float yk = ( ykp+1 )/( ykp+2 );
        if( yk-ykp < eps )
        {
            std::cout << "Member number: " << k << std::endl;
            std::cout << "Member value: " << yk << std::endl;
            return 0;
        }
        ykp = yk;
    }
    std::cout << "Member not found." << std::endl;
    return 0;
}

