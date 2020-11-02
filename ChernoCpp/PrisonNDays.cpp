//
//  PrisonNDays.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/14/20.
//  Copyright © 2020 None. All rights reserved.
//

#include "PrisonNDays.hpp"
#include <iostream>


vector<int> prisonAfterNDays(vector<int>& cells, int N)
{
    int curr = 1;
    int temp = cells[0];
    for(int days = 0; days < N; days++)
    {
        for(int i = 1; i < cells.size(); i++)
        {
            if(temp == cells[i+1])
            {
                temp = cells[i];
                cells[curr] = 1;
            }
            else
            {
                cells[curr] = 0;
            }
        }
    }
    
    for(int p= 0; p < cells.size(); p++)
    {
        cout << p << "th element is: " << cells[p] << endl;
    }
    return cells;
}
