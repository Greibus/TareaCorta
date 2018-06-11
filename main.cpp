#include <iostream>
#include "PagedArray/PagedArray.h"
#include "Sort/QuickSort.h"

PagedArray *bigArray = new PagedArray();



void sortPagedArray(){
    int n = 4000/sizeof((*bigArray)[0]);
    QuickSort quickSort1;
    quickSort1.quicksort(bigArray,0,n-1);
    int i = 0;
    while(i<1000){
        cout<<(*bigArray)[i]<<"-";
        i++;
    }
}


int main() {
    int i = 0;
    while(i<1000){
        cout<<(*bigArray)[i]<<"-";
        i++;
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"-----------------------"<<endl;
    cout << "type QS to order the numbers" << endl;
    string input;
    cin >> input;

    if (input == "QS") {
        sortPagedArray();
    } else{
        cout << "input not valid, type QS" << endl;
    }
    return 0;
}



