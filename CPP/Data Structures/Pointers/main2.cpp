//
// Created by Lenovo on 07-09-2025.
//
#include<stdlib.h>
#include<iostream>
using namespace std;
int main1() {
    int A[5] = {5,3,2,4,2};
    int *p ;
    p = A;
    for (int i = 0 ; i < 5; i++) {
        cout<<p[i]<<endl;
    }

    return 0;
}
int main2() {
    int *p = (int *) malloc(5*sizeof(int));
    p[0] = 13; p[1] = 34; p[2] = 93;p[3] = 4; p[4] = 67;
    for (int i = 0;i<5;i++) {
        cout<<p[i] <<endl;
    }
    delete[] p;
    free(p);
}
int main3() {
    int a = 10;
    int &r = a ;
    r++;
    cout<<a << endl;
    return 0;
}
int main () {
    int *pointer_c;
    int *pointer_cpp;
    pointer_c= (int *) malloc(5* sizeof(int)); // assign in heap for C
    pointer_cpp = new int[5]; // assign in heap for C++
    main3() ;
    delete [] pointer_c;
    free(pointer_c);
    delete [] pointer_cpp;
    free(pointer_cpp);
    return 0;


}