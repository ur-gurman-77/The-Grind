#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
struct complex_number {
    int real;
    int imaginary;
};
struct card {
    int face;
    int color;
    int shape;
};
int main() {
    card deck[52] = {{0,0,1} , {0,2,3} };
    cout<<deck[0].shape <<endl;
    cout<<deck[0].color<<endl;
    cout<<deck[0].face << endl;

}