//
//  BinarySearchTree.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/20/20.
//  Copyright © 2020 None. All rights reserved.
//
#include <iostream>
#include "BinarySearchTree.hpp"

using namespace std;

BinarySearchTree::BinarySearchTree()
{
    m_root = NULL;
}

BinarySearchTree::Node* BinarySearchTree::CreateLeaf(int data)
{
    Node* newNode = new Node;

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    cout << "Created node: " << data << endl;
    return newNode;
}

BinarySearchTree::Node* BinarySearchTree::GetRoot()
{
    return m_root;
}

void BinarySearchTree::PrintTree(Node* ptr)
{
    if(m_root != NULL)
    {
        if(ptr->left != NULL)
        {
            PrintTree(ptr->left);
        }
        std::cout << ptr->data << " " << endl;
        if(ptr->right != NULL)
        {
            PrintTree(ptr->right);
        }
    }
    else
    {
        cout << "No tree exists" << endl;
    }
}

void  BinarySearchTree::AddNode(int data, Node* ptr)
{
    if(m_root == NULL)
    {
        m_root = CreateLeaf(data);
    }
    
    else if (data < ptr->data)
    {
        if( ptr->left == NULL)
        {
            ptr->left = CreateLeaf(data);
        }
        else
        {
            AddNode(data, ptr->left);
        }
    }
    else if(data > ptr->data)
    {
        if( ptr->right == NULL)
        {
            ptr->right = CreateLeaf(data);
        }
        else
        {
            AddNode(data, ptr->right);
        }
    }
    else
    {
        cout << "Value already present in the tree: " << data << endl;
    }
}

