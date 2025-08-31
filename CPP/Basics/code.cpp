//
// Created by Lenovo on 11-07-2025.
//
#include<iostream>
#include<cmath>
using namespace std;
int perspective() {

    int a = 45;
    printf("%d", a) ;
    return 0;
}
int main(){
    cout<<"Hello  World";
    int n ;
    cout<<"Enter the number of inputs : "<<endl;
    int arr[];
    int num ;
    int ans;
    for (int i = 0; i <n ; i++) {
        cin>>num;
        arr[i] = num;
    }
    int temparr[] ;
    // we have to find the peak value of an array ,
    // constraints we will be given with an increasing array and a decreasing array in the same array
    // 1567432
    bool flag = true;
    while (flag) {
        if (n%2 != 0) {
            // first we will check if its an odd , for like in our input its an even
            // so we will check if in 1567432

            if (arr[n/2] > arr[n/2+1] && arr[n/2] > arr[n/2 - 1]) {
                flag = false;
                ans = arr[n/2];
                break;
                // This is the case when we achieve the peak , if its not the peak first we will pop out
                // so for say its the peak, so we need to check
            }
            else {
                if (arr[n/2] > arr[n/2+1] && arr[n/2] < arr[n/2-1]) {
                    // arr[n/2] > arr[n/2 + 1] && arr[n/2] < arr [n/2 -1];
                    arr[n/2] = arr[n/2+1];
                    flag = false;
                }
            }
        }

     }
    return 0;
}
