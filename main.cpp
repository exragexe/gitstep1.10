#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <class T>
void insertSort(T a[], long size) {
    T x;
    long i, j;
    for(i=0;i<size;i++){
        x=a[i];
        for (j=i-1;j>=0&&a[j]>x;j--)
            a[j+1]=a[j];
        a[j+1] = x;
    }
}

int main(){
    srand(time(NULL));
    const long SIZE=10;
    int ar[SIZE];
    cout <<"Massive: ";
    for(int i=0;i<SIZE;i++){
        ar[i]=rand()%100;
        cout<<ar[i]<<" ";
    }
    cout <<endl;
    cout <<"Sort: ";

    insertSort(ar,SIZE);
    for(int i=0;i<SIZE;i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n\n";
}