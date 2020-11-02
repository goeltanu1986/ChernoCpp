//
//  StdException.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 8/13/20.
//  Copyright © 2020 None. All rights reserved.
//

#include "StdException.hpp"

MightGoWrong::MightGoWrong()
{
}

MightGoWrong::~MightGoWrong()
{
    delete[] m_arr;
}
