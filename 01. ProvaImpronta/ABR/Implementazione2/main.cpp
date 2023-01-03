#include <iostream>
#include"BinaryTree.h"

using namespace std;

int main(){

    BinaryTree<int> tree;

    tree.insert(13);
    tree.insert(12);
    tree.insert(16);
    tree.insert(10);
    tree.insert(11);
    tree.insert(14);
    tree.insert(17);

    cout<<endl<<"• Albero In-Order: "<<endl;
    tree.visitInOrder(tree.getRoot());
    cout<<endl;

    //Calcolo la radice
    cout<<endl<<"Radice: "<< tree.getRoot()->getInfo()<<endl;

    return 0;
}