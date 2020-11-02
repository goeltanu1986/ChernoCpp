//
//  BreadthFirstSearch.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/13/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <iostream>
#include <queue>

#include "BreadthFirstSearch.hpp"

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    m_adjList = new list<int>[vertices];
}

void Graph::addEdge(int v, int w)
{
    m_adjList[v].push_back(w);
}

void Graph::BfsUsingList(int source)
{
    queue<int> queue;       //create a queue
    int visited[vertices];   //create an array with all 0's for visited
    
    for(int i = 0; i < vertices; i++)
    {
        visited[i] = 0;
    }
    
    visited[source] = 1;
    cout << "Visited first vertex " << source << endl;

    queue.emplace(source);
    
    while(!queue.empty())
    {
        source = queue.front();
        cout << "Picked vertex for exploring:" << source << endl;
        queue.pop();
        
        for(list<int>::iterator itr = m_adjList[source].begin(); itr != m_adjList[source].end(); ++itr)
        {
            if(visited[*itr] == 0)
            {
                queue.emplace(*itr);
                visited[*itr] = 1;
                cout << "Visited vertex " << *itr << endl;
            }
        }
    }
}

void Graph::BfsUsingMatrix(int mat[8][8], int startIndex, int size)
{
    queue<int> queue;
    int visited[8] = {0};
    
    visited[startIndex] = 1;
    cout << "Visited first vertex " << startIndex << endl;

    queue.emplace(startIndex);
    
    while(!queue.empty())
    {
        int u = queue.front();
        cout << "Picked vertex for exploring:" << u << endl;
        queue.pop();
        for(int v = 0; v < size; v++)
        {
            if ( mat[u][v] == 1 && visited[v] == 0 )
            {
                queue.emplace(v);
                visited[v] = 1;
                cout << "Visited vertex " << v << endl;
            }
        }
    }
}
