//
//  RemoveDuplicates.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/12/20.
//  Copyright © 2020 None. All rights reserved.
//

#include "RemoveDuplicates.hpp"
#include <iostream>

using namespace std;

int removeDuplicates(std::vector<int>& nums) {
    
    if(nums.empty())
    {
        return 0;
    }
    int i =0;
    int len = 1;
    for(i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] != nums[i+1])
        {
            nums[len] = nums[i+1];
            len = len+1;
        }
    }
    return len;
}
