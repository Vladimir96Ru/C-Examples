//
//  main.cpp
//  Couples Lab №2-6.2-12
//
//  Created by Vladimir S. on 20.06.14.
//  Copyright (c) 2014 Vladimir S. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    unsigned int startTime = 510; // 8:30
    unsigned int coupleTime = 105; // 1:45
    unsigned int couple;
    std::cout << "Number couples: ";
    std::cin >> couple;
    unsigned int coupleStartTime = startTime+coupleTime*( couple-1 );
    if( couple > 3 ) coupleStartTime += 30;
    unsigned int idleStartTime = coupleStartTime+45;
    unsigned int endStartTime = idleStartTime+45;
    std::cout << "Beginning couples: " << coupleStartTime/60 << ":" << coupleStartTime%60 << std::endl;
    std::cout << "Beginning break: " << idleStartTime/60 << ":" << idleStartTime%60 << std::endl;
    std::cout << "End couples: " << endStartTime/60 << ":" << endStartTime%60 << std::endl;
    return 0;
}
