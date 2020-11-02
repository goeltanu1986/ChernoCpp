//
//  DepthFirstSearch.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/20/20.
//  Copyright © 2020 None. All rights reserved.
//
#include <iostream>
#include <stack>
#include "DepthFirstSearch.hpp"

using namespace std;

GraphDfs::GraphDfs(int vertices)
{
    this->m_vertices = vertices;
    this->adjList = new std::list<int>[m_vertices];
}

void GraphDfs::addEdge(int v, int w)
{
    adjList[v].push_back(w);
}

void GraphDfs::DFSUtil(int i, bool *visited)
{
    stack<int> stk;
    stk.push(i);
    
    while(!stk.empty())
    {
            i = stk.top();
            stk.pop();
        
        
        if(visited[i] != true)
        {
            visited[i] = true;
            cout << "Visited vertex: " << i << endl;
        }
        
        for(auto itr = adjList[i].begin(); itr != adjList[i].end(); ++itr)
        {
            if(visited[*itr] != true)
            {
                cout << "Pushing to stack: " << *itr << endl;
                stk.push(*itr);
            }
        }
    }
}

void GraphDfs::DFS()
{
    bool visited[m_vertices];
    for(int i = 0 ; i < m_vertices; ++i)
    {
        visited[i] = false;
    }
    for(int i = 0 ; i < m_vertices; ++i)
    {
        if(visited[i] == false)
        {
            DFSUtil(i, visited);
        }
    }
}
