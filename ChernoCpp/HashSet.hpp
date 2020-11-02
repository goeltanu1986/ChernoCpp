//
//  HashSet.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 8/2/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef HashSet_hpp
#define HashSet_hpp

#include <stdio.h>

class HashSet{

private:
//    static const int tableSize = 1000;
//
//    struct MyHashSet{
//        int key;
//        MyHashSet* next;
//    };
//
//    MyHashSet* hashTable[tableSize];
    
public:
    HashSet();
    int HashFunction(int value);
    void add(int value);
    void remove(int value);
    int NumberOfItems(int index);
    void PrintTable();
};


#endif /* HashSet_hpp */
