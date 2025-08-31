//
// Created by Lenovo on 25-08-2025.
//
#include<iostream>
using namespace std;
int pattern_hackerrank(int n) {
    for (int i =0; i<n;i++) {

        for (int j =0;j<i;j++) {
            printf("%d",n-j);
        }
        for (int j = 0 ; j<n*2-1 - i*2;j++) {
            printf("%d", n-i);
        }
        for (int j = 0; j <i;j++) {
            printf("%d", n-i+j+1);
        }
            printf("\n");
        }
        for (int i =n;i>0;i--) {
            printf("\n");
        }
    return 0;
}
int main() {
    pattern_hackerrank(4);
    return 0;
}