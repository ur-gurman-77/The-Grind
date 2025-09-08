//
// Created by Lenovo on 07-09-2025.
//
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle *p;
    //p = (Rectangle *) malloc(sizeof(Rectangle));
    p = new Rectangle;
    p->length  = 10;
    p->breadth = 15;
    cout<< p->length * p->breadth<<endl;
    Rectangle *p2 = p;
    p2 -> length = 2;
    p2 ->breadth =2;
    cout<<p->length * p->breadth;
    delete [] p;
    free(p);
    return 0;
}