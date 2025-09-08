//
// Created by Lenovo on 07-09-2025.
//
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    Rectangle r = {20,5} ;
    Rectangle *p = &r; // p variable has the address of r and to access the r via pointer we need to use (*p)
    cout<<p<<endl;
    r.length = 15;
    r.breadth = 4;
    (*p).length =4;
    cout<<r.length * r.breadth<<endl;
    p -> breadth = 45;
    cout<<r.length *r.breadth<< endl;
    return 0;
}