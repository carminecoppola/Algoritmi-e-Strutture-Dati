#ifndef QUICKSORT_H
#define QUICKSORT_H

using namespace std;

class quicksort{
    private:
        void static partition(int *,int ,int ,int* );
        void static swap(int * , int *);
    public:
       void static quick();

};

void quicksort::partition(int *a,int s, int f, int *puntatore){


    if (a[s]> a[f]){
        
        int p1,p2;
        p1 = a[s];
        p2 = a[f];

        int i,j,k;
        i = s + 1;
        j = f - 1;
        k = s + 1;
    }
    
}

void quicksort::swap(int *a, int *b){

    int t = *a;
    *a = *b;
    *b = t;

}

void quicksort::quick(){


}

#endif