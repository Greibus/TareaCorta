//
// Created by tony on 10/03/18.
//

#ifndef TAREACORTA_PAGEDARRAY_H
#define TAREACORTA_PAGEDARRAY_H




#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class PagedArray {
private:

    int sizeOfArray;
    static const int maxSize = 100;
    int leftPage[maxSize];
    int rightPage[maxSize];
    int midPage[maxSize];
    int pages;
    int loaded[3];
    bool leftIn, rightIn, midIn;
    string dirLocation = ("../File/archivo.bin");
    int getSize();
    void readFile(int array[], int ini);
    void writeFile(int array[],int pos);
    inline bool exists(string& name);
    void makeBigArray(int cant);

public:
    int contador = 0;
    PagedArray();
    ~PagedArray();
    int& operator [] (int x);


};


#endif //TAREACORTA_PAGEDARRAY_H
