//
//  main.cpp
//  Shift Lab №3-6.1-12
//
//  Created by Vladimir S. on 20.06.14.
//  Copyright (c) 2014 Vladimir S. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    unsigned int nd = 10;
    unsigned int k = 5;
    char array[nd];
    char buffer[nd];
    for( int i = 0; i < nd; i++ ) array[i] = i;
    for( int i = 0; i < nd; i++ ) std::cout << ( int )array[i] << "  ";
    std::cout << std::endl;
    
    for( int i = 0; i < k; i++ ) buffer[i] = array[i];
    for( int i = k; i < nd; i++ ) array[i-k] = array[i];
    for( int i = 0; i < k; i++ ) array[i+k] = buffer[i];

    for( int i = 0; i < nd; i++ ) std::cout << ( int )array[i] << "  ";
    std::cout << std::endl;
    return 0;
}
