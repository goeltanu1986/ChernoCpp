//
//  RecursiveAlgos.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/20/20.
//  Copyright © 2020 None. All rights reserved.
//
#include <iostream>
#include "RecursiveAlgos.hpp"

int Factorial(int num)
{
    int result = 1;
    if(num <= 1)
    {
        std::cout << "Factorial of " << num << " is: " << result << std::endl;

        return result;
    }
    if(num >= 2)
    {
        result = num * Factorial(num-1);
    }
    std::cout << "Factorial of " << num << " is: " << result << std::endl;
    return result;
}
