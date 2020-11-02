//
//  DetectCapitals.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 8/1/20.
//  Copyright © 2020 None. All rights reserved.
//
#include <iostream>
#include <string>
#include "DetectCapitals.hpp"

using namespace std;

bool isCapital(char c)
{
    if((int)c >= 65 && (int)c <= 90)
        return true;
    else
        return false;
}

bool isSmall(char c)
{
    if((int)c >= 97 && (int)c <= 122)
        return true;
    else
        return false;
}

bool detectCapitalUsed(string word)
{
    bool result = false;
    
    if(word.size() <= 2)
    {
        result = true;
    }
    if(isCapital(word[0]))
    {
        if(isCapital(word[1]))
        {
            for(int i = 2; i < word.size(); i++)
            {
                if(isCapital(word[i]))
                    result = true;
                else
                    result = false;
                    return result;
            }
        }
        else
        {
            for(int i = 2; i < word.size(); i++)
            {
                if(isSmall(word[i]))
                    result = true;
                else
                {
                    result = false;
                    return result;
                }
                
            }
        }
    }
    else
    {
        for(int i = 1; i < word.size(); i++)
        {
            if(isSmall(word[i]))
                result = true;
            else
                result = false;
                return result;
        }
    }
    return result;
}
