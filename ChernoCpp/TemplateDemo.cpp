//
//  TemplateDemo.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/21/20.
//  Copyright © 2020 None. All rights reserved.
//
#include <iostream>
#include "TemplateDemo.hpp"

template <typename t>
Array<t>::Array(t arr[], int s)
{
    start = new t[s];
    size = s;
    for( int i = 0; i < size; i++)
    {
        start[i] = arr[i];
    }
}

template <typename t>
void Array<t>::print()
{
    for( int i = 1 ; i <= size; i++)
    {
        std::cout << *start << std::endl;
    }
}
