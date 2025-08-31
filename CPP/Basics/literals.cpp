//
// Created by Lenovo on 12-08-2025.
//
#include <iostream>
using namespace std;
int decimalintegrals () {
    // none, l, ll, unsigned l, unsigned ll, unsigned
    int size;
    size = sizeof(long);
    cout<<"The size of long is : " << size << endl;
    size = sizeof(unsigned long);
    cout<<"The size of unsigned long is : " << size << endl;
    size = sizeof(unsigned long long);
    cout<<"The size of unsigned long long is : " << size << endl;
    size = sizeof(long long);
    cout<<"The size of long long is : " << size << endl;
    size = sizeof(int);
    cout<<"The size of int is : " << size << endl;

}

int main() {
    decimalintegrals();
}