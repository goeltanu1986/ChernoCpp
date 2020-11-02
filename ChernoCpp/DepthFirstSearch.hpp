//
//  DepthFirstSearch.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/20/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef DepthFirstSearch_hpp
#define DepthFirstSearch_hpp

#include <stdio.h>
#include <list>

class GraphDfs
{
public:
    GraphDfs(int vertices);
    void addEdge(int v, int w);
    void DFS();
    void DFSUtil(int i, bool visited[]);
    
private:
    int m_vertices;
    std::list<int> *adjList;
    
};


#endif /* DepthFirstSearch_hpp */
