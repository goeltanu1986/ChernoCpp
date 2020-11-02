//
//  BinarySearch.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/13/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <iostream>

#include "BinarySearch.hpp"

using namespace std;

int BinarySearch(int sortedArray[10], int left, int right, int n)
{
    while(left < right)
    {
        int mid = left + (right - left)/2;
        
        if(sortedArray[mid] == n)
        {
            cout << "Found: " << sortedArray[mid] << endl;
            return sortedArray[mid];
        }
        else if (sortedArray[mid] < n)
        {
            left = mid + 1;
        }
        else // for sortedArray[mid] > n
        {
            right = mid -1;
        }
    }
    cout << "Not found: " << n << endl;
    return -1;
}
