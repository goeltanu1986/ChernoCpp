//
//  StdException.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 8/13/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef StdException_hpp
#define StdException_hpp

#include <stdio.h>

class MightGoWrong
{
public:
    MightGoWrong();
    
    ~MightGoWrong();
    
    char* m_arr = new char[99999999999999999];

};
#endif /* StdException_hpp */
