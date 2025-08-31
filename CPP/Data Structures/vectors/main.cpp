//
// Created by Lenovo on 25-08-2025.
//
#include<iostream>
#include<vector>
using namespace std;
int Initialization() {
    vector <int> v1; //empty
    vector <int> v2(5); // 5 elements all 0
    vector <int> v3(5,19); // 5 elements all 19
    vector <int> v4 = {1,24,5,5,63,2,4}; // direct assignment
    vector <int> v5(v4); // copy constructor

}
int basic_functions() {
    vector <int> v = {24,63,2,4};
    v.push_back(10); //insert element at the end
    for (int i = 0; i < v.size(); i++) {
        cout<< v[i]<< endl;
    }
    cout<<*v.begin() <<endl;
    cout<<& (*v.begin())<<endl;
    cout<<*v.end() << endl;
    cout<<v.front()<<endl;
    cout<< v.back() << endl;
    v.pop_back(); // delete element from the end
    cout <<v.size() << endl; // current size
    cout << v.capacity() << endl; // total allocated memory
    v.empty() ? cout<<"The vector is empty "<<endl : cout<<"The vector is not empty"<<endl ; // check if the vector is empty
    cout<< v.at(3) << endl;
    try {
        cout<<v.at(14) <<endl;
    } catch (out_of_range &e) {
        cout<<"Invalid Index bsdk: " <<e.what() <<endl;
    }
    v.clear(); // remove all elements
    return 0;
}


int Iterators( vector <int> &v) {
    cout<<&v<< endl;
    for (auto it = v.begin() ; it!= v.end() ; it++) {
        cout<<*it<<endl;
    }
    v.push_back(19);
    v.push_back(30);
    cout<< "This is also a blank space " << endl;
    for (int i =0;i< v.size() ;i++) {
        cout<< v[i] <<endl;
    }

    return 0;

    /* when we add the pointer &v parameter to the
     * functions in that case the original address of vector
     * is taken while in case of simple v a copy of the vector
     * is used in the function;

     */
}
int Iterators_main() {
    vector <int> v = {24,5,63,4};
    cout<<&v<<endl;
    Iterators(v);
    cout<< "this is the blank space" <<endl;
    for (int i =0;i<v.size() ;i++) {
        cout<< v[i] <<endl;
    }
}
int reverse_iteration() {
    vector <int> v = {24,5,63,4};
    for (auto it = v.rbegin() ; it!=v.rend() ; it++ ) {
        cout<<*it<<endl;
    }
    return 0;
}

using namespace std;
int main() {

}