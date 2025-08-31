//
// Created by Lenovo on 30-08-2025.
//
#include<iostream>
using namespace std;
// mostly you are going to use vectors instead of heap allocated arrays
int fixedSizeArrayInitialization() {
    int n = 5;
    int arr1[10]; // stack allocated
    int arr2[n]; // stack allocated
    int *arr3 = new int[n]; // heap allocated instead use Vectors
    int arr4[] = {2,3,5,6}; // stack allocated
    return 0;
}
int main() {
    int* arr= new int[10];
     delete[] arr;
    arr = nullptr;
    return 0;
}