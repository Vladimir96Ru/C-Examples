//
//  main.cpp
//  NxM Lab №3-6.2-12
//
//  Created by Vladimir S. on 20.06.14.
//  Copyright (c) 2014 Vladimir S. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    unsigned int dn = 4;
    unsigned int dm = 4;
    int matrix[dn][dm+1];
    int array[dn];
    for( int n = 0; n < dn; n++ )
        for( int m = 0; m < dm; m++ )
            matrix[n][m] = n*m;
    for( int n = 0; n < dn; n++ )
        array[n] = n;
    
    unsigned int mc = dm/2;
    for( int n = 0; n < dn; n++ )
        for( int m = dm; m > mc; m-- )
            matrix[n][m] = matrix[n][m-1];
    for( int n = 0; n < dn; n++ )
        matrix[n][mc] = array[n];
    for( int n = 0; n < dn; n++ )
    {
        for( int m = 0; m <= dm; m++ )
            std::cout << matrix[n][m] << "  ";
        std::cout << std::endl;
    }
    return 0;
}
