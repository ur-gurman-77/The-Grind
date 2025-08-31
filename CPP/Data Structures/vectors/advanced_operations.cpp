//
// Created by Lenovo on 26-08-2025.
//
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include "radix.hpp"
#include <numeric>
int sorting(vector <int> v) {
    cout<<"Ascending order"<<endl;
    sort(v.begin(), v.end()); // ascending
    for (auto it = v.begin() ; it!= v.end() ; it++) {
        cout<<*it<<endl;
    }
    cout<<"Descending order" <<endl;
    sort(v.rbegin(), v.rend());
    for (auto it = v.begin() ; it!=v.end() ;it++) {
        cout<<*it<<endl;
    }
}
int radix_sort(vector <int> v) {
    radix_sort_int32(v);
    for (auto it = v.begin(); it<v.end() ;it++) {
        cout<<*it<<endl;
    }
    return 0;
}
int searching(vector<int> v) {
    sort(v.begin() , v.end());
    bool found = binary_search(v.begin() , v.end(),45);
    cout<< found<<endl;
    cout<< *lower_bound(v.begin() , v.end() , 5)<< endl;
    cout<< *upper_bound(v.begin(), v.end() , 23)<<endl;
    return 0;
}

int count_how_many_times (vector<int> v) {
    sort(v.begin() , v.end());
    int count = upper_bound(v.begin() , v.end() , 3) - lower_bound(v.begin() , v.end(),3);
    cout<<count<< endl;
    return 0;
}
int count_how_many_times_better_version(vector <int> v) {
    unordered_map<int , int> freq;
    for (int num:v) freq[num]++ ;
    cout<<freq[3]<< endl;
    // better time complexity than the previous version but consuming more memory
}

int unique_elements(vector<int> v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (auto it = v.begin() ;  it != v.end() ; it++) {
        cout<<*it<<endl;
    }
    return 0;
}
int partial_sum_and_accumulate(vector<int> v) {
    int sum = accumulate(v.begin() , v.end() , 0);
    cout<<sum<<endl;
}

int main( ) {
    vector <int> v = {23,45,2,3,89,1,65, 3,3,3};
    partial_sum_and_accumulate(v);
}