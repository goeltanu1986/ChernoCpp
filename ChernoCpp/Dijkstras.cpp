//
//  Dijkstras.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/19/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <vector>

#include "Dijkstras.hpp"

using namespace std;

GraphDij::GraphDij(int vertices)
{
    this->m_vertices = vertices;
    m_adjList = new list<int>[vertices];
}

void GraphDij::addEdge(int v, int w)
{
    m_adjList[v].push_back(w);
}

int GraphDij::findMinVertex(vector<int> distance, int* visited)
{
    
    return 0;
}

void GraphDij::Dijkstras(int source)
{

    vector<int> distance;           // distance from source vertex to all other vertices
    int* visited[m_vertices];       // array of vertices with 0 for non visited and 1 for visited
    
    for( auto itr = m_adjList->begin(); itr != m_adjList->end(); ++itr)
    {
        visited[*itr] = 0;
        distance[*itr] = INT_MAX;
    }
    distance[0] = 0;
    
    for( int i = 0; i < (m_vertices -1) ; ++i)
    {
        
    }
    
//    int minVertex = findMinVertex(distance, visited[m_vertices]);
}
