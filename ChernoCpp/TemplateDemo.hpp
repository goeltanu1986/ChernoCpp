//
//  TemplateDemo.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/21/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef TemplateDemo_hpp
#define TemplateDemo_hpp

#include <stdio.h>

template <typename t>
class Array
{
    t *start;
    int size;
public:
    Array(t arr[], int s);
    void print();
    
};

#endif /* TemplateDemo_hpp */
