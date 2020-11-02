//
//  Dijkstras.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/19/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef Dijkstras_hpp
#define Dijkstras_hpp

#include <stdio.h>
#include <list>
#include <vector>

using namespace std;

class GraphDij
{
public:
    GraphDij(int vertices);
    
    void Dijkstras(int source);
    
    void addEdge(int v, int w);         // adds an edge from v to w
    
    int findMinVertex(vector<int> distance, int *visited);

   
private:
    
    int m_vertices;               // number of vertices
    
    list<int> *m_adjList;
    

};

#endif /* Dijkstras_hpp */
