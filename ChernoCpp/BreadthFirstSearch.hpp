//
//  BreadthFirstSearch.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/13/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef BreadthFirstSearch_hpp
#define BreadthFirstSearch_hpp

#include <stdio.h>
#include <list>
#include <vector>

using namespace std;

class Graph
{
public:
    Graph(int vertices);
    
    void BfsUsingMatrix(int mat[8][8], int startIndex, int size);

    void BfsUsingList(int source);
    
    void addEdge(int v, int w);         // adds an edge from v to w
   
private:
    
    int vertices;               // number of vertices
    
    list<int> *m_adjList;
    
    vector<vector<int>> *adjMat;
};

#endif /* BreadthFirstSearch_hpp */
