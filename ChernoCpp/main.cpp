//
//  main.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/12/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <queue>
#include <fstream>

//#include "Hash.hpp"
//#include "DoubleList.hpp"
//#include "List.hpp"
//#include "RemoveDuplicates.hpp"
//#include "BinarySearch.hpp"
//#include "BreadthFirstSearch.hpp"
//#include "PrisonNDays.hpp"
//#include "BinarySearchTree.hpp"
//#include "DepthFirstSearch.hpp"
//#include "RecursiveAlgos.hpp"
//#include "TemplateDemo.hpp"
//#include "DetectCapitals.hpp"
//#include "HashSet.hpp"
//#include "StdException.hpp"
#include "RingBuffer.hpp"

using namespace std;

/*
 void RunDemos()
{
    
// Remove duplicates from a sorted array
    
     int arr[] = {1,2,2,2,3,4,4,4,4,4,5};
    std::vector<int> vec;
    vec.assign(arr, arr+11);
    std::cout << removeDuplicates(vec) << std::endl;
    
    for(auto i = vec.begin(); i != vec.end(); ++i)
        std::cout << "elements are" << *i << std::endl;
     */

//Binary Search a number in a array of size 10
    /*
    int sortedArray[] = {1,4,6,9,12,24,36,39,44,51};
    BinarySearch(sortedArray, 0, 9, 6);
    BinarySearch(sortedArray, 0, 9, 2);
    BinarySearch(sortedArray, 0, 9, 44);
     */
    
// Breadth first Search using adjacency matrix
    /*
    int adjMatrix[8][8] = { {0,1,1,0,0,0,0,0},
                            {1,0,1,1,1,0,0,0},
                            {1,1,0,0,1,0,1,1},
                            {0,1,0,0,1,1,0,0},
                            {0,1,1,1,0,1,0,0},
                            {0,0,0,0,1,0,0,0},
                            {0,0,1,0,0,0,0,1},
                            {0,0,1,0,0,0,1,0}};
    
    BfsUsingMatrix(adjMatrix, 0, 8);
     */
    
// Breadth first search using adjacency list
    /*
    Graph graph(8);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,0);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(2,0);
    graph.addEdge(2,4);
    graph.addEdge(2,6);
    graph.addEdge(2,7);
    graph.addEdge(3,1);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,1);
    graph.addEdge(4,2);
    graph.addEdge(4,3);
    graph.addEdge(4,5);
    graph.addEdge(5,4);
    graph.addEdge(6,2);
    graph.addEdge(6,7);
    graph.addEdge(7,2);
    graph.addEdge(7,6);

    graph.BfsUsingList(0);
     */
    /*
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    prisonAfterNDays(arr, 7);
     */
    
    // Leetcode Add two numbers:

//    List* list1(NULL);
//    List* list2(NULL);
//    List* listSum(NULL);
//
//    list1->Append(2);
//    list1->Append(4);
//    list1->Append(3);
//
//    list2->Append(5);
//    list2->Append(6);
//    list2->Append(4);
//    List myList;
//
//       myList.Append(23);
//       myList.Append(12);
//       myList.Append(6);
//       myList.Append(9);
//       myList.Append(47);
//       myList.Append(79);
//       myList.PrintList();
//       myList.Prepend(29);
//       myList.PrintList();
//       myList.Insert(4, 213);
//       myList.PrintList();
//       myList.DeleteNode(79);
//    myList.PrintList();
//    list1->PrintList();
//    list2->PrintList();
//
//    listSum->addTwoNumbers(list1, list2);
//
//    listSum->PrintList();
    
//
//    BinarySearchTree bst;
//
//    int arr[] = { 50,42,8,21,9,11,29, 92,14};
//
//    for ( int i = 0; i < 9; i++)
//    {
//        bst.AddNode(arr[i], bst.GetRoot());
//    }
//    bst.PrintTree(bst.GetRoot());
    
//    GraphDfs graph(8);
//    graph.addEdge(0,1);
//    graph.addEdge(0,2);
//    graph.addEdge(1,0);
//    graph.addEdge(1,2);
//    graph.addEdge(1,3);
//    graph.addEdge(1,4);
//    graph.addEdge(2,0);
//    graph.addEdge(2,4);
//    graph.addEdge(2,6);
//    graph.addEdge(2,7);
//    graph.addEdge(3,1);
//    graph.addEdge(3,4);
//    graph.addEdge(3,5);
//    graph.addEdge(4,1);
//    graph.addEdge(4,2);
//    graph.addEdge(4,3);
//    graph.addEdge(4,5);
//    graph.addEdge(5,4);
//    graph.addEdge(6,2);
//    graph.addEdge(6,7);
//    graph.addEdge(7,2);
//    graph.addEdge(7,6);
//
//    graph.DFS();
    
//    Factorial(2);

//    int arr[5] = {1,3,5,7,9};
//    Array<int> IntArr(arr, 5);
//    IntArr.print();
//
//    std::cout << "USA: " << detectCapitalUsed("USA") << std::endl;
//    std::cout << "Google: " << detectCapitalUsed("Google") << std::endl;
//    std::cout << "LeeTCode:" << detectCapitalUsed("LeeTCode") << std::endl;
//
//    HashSet myhash;
//    myhash.add(99);
//    myhash.PrintTable();
//}

/*

void MightGoWrong()
{
    bool error0 = true;
    bool error1 = false;
    bool error2 = true;

    if(error0)
    {
        throw 8;
    }
    if(error1)
    {
        throw "this is wrong";      // catching a primitve string
    }
    if(error2)
    {
        throw string("Catch a non primitive string");   //here the strong object is bring created
    }
}

void UsesMightGoWrong()
{
    MightGoWrong();
}
 */

int main()
{
    /*Complex c1(2,3);
    
    Complex c2 = c1;

    std::cout << "c1: " << c1 << std::endl;*/
    
    ring<int> numRing(5);

    numRing.add(1);
    numRing.add(2);
    numRing.add(3);
    numRing.add(4);
    numRing.add(5);
    numRing.add(6);
    
    /*for(int i = 0; i < numRing.size(); ++i)
    {
        std::cout << numRing.get(i) << std::endl;
    }*/

    for(ring<int>::iterator itr = numRing.begin(); itr != numRing.end(); itr++)
    {
        std::cout << (*itr) << std::endl;
    }
    /*
    fstream outfile;
    
    string fileName = "Newtext.txt";
    
    outfile.open(fileName, ios::out);
    
    if(outfile.is_open())
    {
        cout << "file : " << fileName << endl;

        outfile << "Arite" << endl;
        outfile << 12345 << endl;
    }
    else{
        cout << "Could not open file : " << fileName << endl;
    }
    
    try
    {
        MightGoWrong ex;
    }
    catch(int e)
    {
        cout << "Error code: " << e << endl;
    }
    catch(char const* mess)
    {
        cout << "Error message: " << mess << endl;
    }
    catch(string &e)
    {
        cout << "Error string message is: " << e << endl;
    }
    catch(bad_alloc& e)
    {
        cout << "Error type: " << e.what() << endl;
    }

    cout << "Still running " << endl;
    
    RunDemos();
  */
    return 0;
}



