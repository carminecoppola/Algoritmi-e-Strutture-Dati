/*Implementare un ABR con tutti i metodi*/

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

    //Massimo e minimo
    cout<<endl<<endl<<"L'elemento mimimo è: "<< tree.getMinimum(tree.getRoot())->getInfo();
    cout<<endl<<endl<<"L'elemento Massimo è: "<< tree.getMaximum(tree.getRoot())->getInfo()<<endl;

    //Nodo ricercato con TREESEARCH
    Nodo<int> *nodo = tree.treeSearch(tree.getRoot(),14);

    //Successore
    cout<<endl<<"Successore di " <<nodo->getInfo()<< " : " <<tree.successor(nodo)->getInfo()<<endl;
    //Predecessore
    cout<<endl<<"Predecessore di " <<nodo->getInfo()<< " : " <<tree.predecessor(nodo)->getInfo()<<endl;

    //Cancellazione
    cout<<endl<<"Cancello il numero 11: ";
    tree.treeDelete(tree.treeSearch(tree.getRoot(), 11));

    cout<<endl<<"Stampo l'albero per vedere che sia effettivamente cancellato: ";
    cout<<endl<<"• Albero In-Order: "<<endl;
    tree.visitInOrder(tree.getRoot());
    cout<<endl;

    return 0;
}