//
// Created by Lenovo on 31-08-2025.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int remove_element(vector<int> v) {
    v.erase(v.begin() + 3);
    for (auto x :v) {
        cout<<x<<endl;
    }
     //O(n)
}
int remove_all_the_occurences_of_a_given_value(vector<int> &v, int target) {
    for (auto it = v.begin(); it != v.end(); ) {
        if (*it == target) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
    //O(n)
    for (auto x : v) {
        cout << x << endl;
    }
    return 0;
}
int better_remove_all_the_occurences_of_a_given_value(vector<int> v, int target) {
    v.erase(remove(v.begin(), v.end(), target), v.end());
    //O(n*n)
    for (auto x:v) {
        cout<<x<<endl;
    }
    return 0;
}

int main() {
    vector<int> v= {2,3,34,4,5,6,4,3,2};
    remove_element(v);
    return 0;
}