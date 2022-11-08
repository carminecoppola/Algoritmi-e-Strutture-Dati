#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include<iostream>
#include<vector>
#include"nodo.h"

using namespace std;

template<class Item>
class binarySearchTree{
    private:
       Nodo<Item> *root;
    public:
        binarySearchTree();
        int minimumTree();
        int maximumTree();
        int predecessorTree();
        int successorTree();
        void insertTree();
        void deleteTree();
};

template<class Item> binarySearchTree::binarySearchTree(){
    root = nullptr;

}

#endif