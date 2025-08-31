//
// Created by Lenovo on 25-08-2025.
//
#include<iostream>
using namespace std;
int pointerAddress() {
    int a =10;
    float b = 9;
    char character = 'a';
    int*p1 = &a;
    int **p2 = &p1;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;
    return 0;
}
int main() {
    pointerAddress();
}
