//
// Created by Lenovo on 27-08-2025.
//
#include<iostream>
#include<vector>
using namespace std;
int factorial(int n) {
    if (n==0) {
        return 1;
    }
    return factorial(n-1) *n;
}
int fibonacci(int n) {
    if (n==0 || n==1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);

}
int sum_of_n_numbers(int n) {
    if (n==0) {
        return 0;
    }
    return n + sum_of_n_numbers(n-1);
}

bool check_if_the_array_is_sorted(int arr[], int n) {
    if (n ==0 || n==1) {
        return true;
    }
    return arr[n-1] > arr[n-2] && check_if_the_array_is_sorted(arr, n-1);

 }
int recursive_binary_search(vector<int>& arr, int tar, int st, int end ) {
    if (st<= end) {
        int mid = st + (end-st)/2;
        if (arr[mid] == tar) {
            return mid;
        }
        else if (arr[mid] <= tar) {
            recursive_binary_search(arr, tar, mid+1, end);
        } else {
            return recursive_binary_search(arr, tar, st, mid-1);
        }
    }
    return -1;
 }
int search(vector<int>& arr, int tar) {
    return recursive_binary_search(arr, tar, 0,arr.size()-1);

}

void calculate_the_maximum(int n, int k) {
    int arr[n];
    for(int i =0; i<n ; i++) {
        arr[i] = i+1;
    }
    int max_and = 0;
    int max_or = 0;
    int max_xor =0;
    for(int j =0; j< n-1 ;j++) {
        for(int x = j+1;x<n;x++) {
            int temp_and = arr[j] & arr[x];

            int temp_or = arr[j] | arr[x];
            int temp_xor = arr[j] ^ arr[x];

            if(temp_and > max_and &&temp_and<k) {
                    max_and = temp_and;
            }
            if (temp_or > max_or && temp_or<k) {
                    max_or = temp_or;
            }
            if(temp_xor> max_xor && temp_xor<k ){
                    max_xor = temp_xor;
            }
        }
    }
    printf("%d\n%d\n%d" , max_and, max_or,max_xor);


}

int main() {
    calculate_the_maximum(3, 2);

    return 0;
}