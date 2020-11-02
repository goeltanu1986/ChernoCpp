//
//  BinarySearchTree.hpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/20/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>

class BinarySearchTree
{
    public:
    struct Node
    {
        int data;
        Node* left;
        Node* right;
    };
    
    BinarySearchTree();
    Node* CreateLeaf(int data);
    void AddNode(int data, Node* ptr);
    void PrintTree(Node* ptr);
    Node* GetRoot();
    
private:
    Node* m_root;
    Node* m_parent;
//    Node* child;
//    Node* leaf;

};


#endif /* BinarySearchTree_hpp */
