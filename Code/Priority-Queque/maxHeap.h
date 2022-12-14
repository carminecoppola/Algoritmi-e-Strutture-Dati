#ifndef MAXHEAP_H
#define MAXHEAP_H

#include<iostream>
#include <vector>
using namespace std;

template <class Item>
class maxHeap{
    private:
        int size;
        int left(int i){
            int sx = (i*2)+1;
            return sx;
        };
        int right(int i){
            int dx = (i*2)+2;
            return dx;
        };

    protected:
        vector<Item> albero;

        int parent(int i){
            int padre = (i-1)/2;
            return padre;
        };
        void swap(Item& a ,Item& b){
            Item t = a;
            a = b;
            b = t;
        };

        //Metodo di getter per l'Albero
        vector<Item> getAlbero(){
            return albero;
        };
        //Metodo di setting per il Size
        void setSize(int s){
            size = s;
        };
        //Metodo di getter per il Size
        int getSize(){
            return size;
        };

        void maxHeapify(int size); 
        void insert(Item elemento);

    public:
        //Costruttore
        maxHeap(vector<Item>alb){
            albero = alb;
            size = 0;
        };
        void buildMaxHeap(); //Costruzione del nostro albero
        void printArray();
};

template<class Item> void maxHeap<Item>::maxHeapify(int i){
    int max = i;
    int l = left(max);
    int r = right(max);

    if(l < getSize() && getAlbero().at(max) < getAlbero().at(l)){
            max = l;
    }
    if (r < getSize() && getAlbero().at(max) < getAlbero().at(r)){
        max = r;
    }
    if (max != i){
        swap(albero.at(i),albero.at(max));
        maxHeapify(max);
    }
}

template<class Item> void maxHeap<Item>::buildMaxHeap(){   
    setSize((int)getAlbero().size()); //setto il size dell'albero
    for (int i = getSize()/2; i >= 0 ;i--){
        maxHeapify(i);
    } 
}

template <class Item> void maxHeap<Item>::insert(Item elemento){
    albero.push_back(elemento);      //tramite pushback inserisco l'elemento nell'albero
    setSize(getSize()+1);           //Visto che è stato aggiunto un elemento aggiorno il size

    int i = getSize()-1;

    while (i > 0 && getAlbero().at(parent(i)) < elemento)
    {
        swap(albero.at(i),albero.at(parent(i)));    //Scambio l'elemento a(i) con la radice
        i = parent(i);      //Assegno i due indici quindi non serve lo swap
    }
}


template <class Item> void maxHeap<Item>::printArray(){
    cout<<"\nStampa dell'albero: \n"<<endl;
    for (int i = 0; i < getSize(); i++){
        cout<< getAlbero().at(i)<<" ";
    }
    cout<<endl;
    
}
#endif 