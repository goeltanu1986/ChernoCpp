//
//  HashSet.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 8/2/20.
//  Copyright © 2020 None. All rights reserved.
//

#include "HashSet.hpp"
#include <iostream>

using namespace std;

int tableSize = 10;
struct MyHashSet{
    int key;
    MyHashSet* next;
};

MyHashSet* hashSet[10];

HashSet::HashSet()
{
    for(int i = 0; i < tableSize; i++)
    {
        hashSet[i] = new MyHashSet;
        hashSet[i]->key = NULL;
        hashSet[i]->next = NULL;
    }
}

int HashSet::HashFunction(int value)
{
    int index;
    index = value % tableSize;
    return index;
}

int HashSet::NumberOfItems(int index)
{
    int res = 0;
    
    if(hashSet[index]->key == (int)NULL)
    {
        return res;
    }
    else
    {
        res++;
        MyHashSet* Ptr = hashSet[index];
        while(Ptr->next != NULL)
        {
            res++;
            Ptr = Ptr->next;
        }
    }
    return res;
}

void HashSet::PrintTable()
{
    int num;
    
    for ( int i = 0; i < tableSize; i++)
    {
        num = NumberOfItems(i);
        
        cout << "Index is " << i << endl;
        cout << "Number of items is " << num << endl;
        cout << "Value is " << hashSet[i]->key << endl;
        cout << "-------------------" << endl;
     }
}

void HashSet::add(int value)
{
    int index;
    index = HashFunction(value);
    
    if(hashSet[index]->key == (int)NULL)
    {
        hashSet[index]->key = value;
        hashSet[index]->next = NULL;
    }
    else
    {
        MyHashSet* Ptr = hashSet[index];
        
        MyHashSet* newBlock = new MyHashSet;
        newBlock->key = value;
        newBlock->next = NULL;
        
        while(Ptr->next != NULL)
        {
            Ptr = Ptr->next;
        }
        
        Ptr->next = newBlock;
    }
}

void HashSet::remove(int value)
{
    int index;
    index = HashFunction(value);
    
    if(hashSet[index]->key == (int)NULL)
    {
        cout << "key does not exist" << endl;
    }
    else
    {
        if(hashSet[index]->key == value)
        {
            
        }
        
        MyHashSet* Ptr = hashSet[index];
        
        MyHashSet* newBlock = new MyHashSet;
        newBlock->key = value;
        newBlock->next = NULL;
        
        while(Ptr->next != NULL)
        {
            Ptr = Ptr->next;
        }
        
        Ptr->next = newBlock;
    }
}
