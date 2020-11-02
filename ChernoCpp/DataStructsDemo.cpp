//
//  DataStructsDemo.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/12/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Hash.hpp"
#include "List.hpp"
#include "DoubleList.hpp"

using namespace std;

void CreateAndPrintHashTable()
{
    HashClass hashObj;

    hashObj.AddItem("Aveer", "MilkDoodu");
    hashObj.AddItem("Tanu", "Cappucino");
    hashObj.AddItem("Vijeet", "Coke");
    hashObj.AddItem("Rohit", "Beer");
    hashObj.AddItem("Manu", "Vodka");
    hashObj.AddItem("Saanvi", "Milk");
    hashObj.AddItem("Miraya", "Water");
    hashObj.AddItem("Salil", "Coffee");
    hashObj.AddItem("Nancy", "Latte");

    hashObj.PrintTable();
}

void CreateAndPrintList()
{
    List myList;

    myList.Append(23);
    myList.Append(12);
    myList.Append(6);
    myList.Append(9);
    myList.Append(47);
    myList.Append(79);
    myList.PrintList();
    myList.Prepend(29);
    myList.PrintList();
    myList.Insert(4, 213);
    myList.PrintList();
    myList.DeleteNode(79);
    myList.PrintList();
}

void CreateAndPrintDoubleList()
{
    DoublyLinkedList list;
    list.PrintForwardList();
    list.PrintBackwardList();
}
