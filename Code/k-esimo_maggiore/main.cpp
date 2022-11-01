/*  Data una sequenza di interi (rappresentata da un array),.
    trovare il k-esimo elemento più grande per ogni i=0...N-1.
        seq = [10,2,21,1,-1,45,8,12,78]
        k = 2
        i = 1 k-max = 3
        i = 2 k-max = 10
        i = 3 k-max = 10
        ...
*/

#include <iostream>
#include <vector>
#include"kMax.h"

using namespace std;

int main(){

    vector<int> tree {10,3,21};
    kMax <int> albero = kMax<int>(tree,3);

    albero.buildMinHeap();
    albero.printArray();
    cout<<endl<<"Il k-esimo numero è: "<<albero.minimum()<<endl<<endl;

    albero.insertMH(1);
    albero.printArray();
    cout<<endl<<"Il k-esimo numero è: "<<albero.minimum()<<endl;

    albero.insertMH(8);
    albero.printArray();
    cout<<endl<<"Il k-esimo numero è: "<<albero.minimum()<<endl;

    albero.insertMH(45);
    albero.printArray();
    cout<<endl<<"Il k-esimo numero è: "<<albero.minimum()<<endl;

    albero.insertMH(12);
    albero.printArray();
    cout<<endl<<"Il k-esimo numero è: "<<albero.minimum()<<endl;

    albero.insertMH(78);
    albero.printArray();
    cout<<endl<<"Il k-esimo numero è: "<<albero.minimum()<<endl;
    
    return 0;
}