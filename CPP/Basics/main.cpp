#include<stdio.h>
int main () {
    int n  = 5;
    int a = n ;
    for (int i = 0; i < n; i++) {
        for (int j =0; j<a ; j++) {
            printf("#");
        }
        for (int k = 0 ; k<i ; k++) {
            printf(" ");
            printf(" ");
        }
        for (int j =0; j< a ; j++) {
            printf("#");
        }
        printf("\n");
        a--;
    }
    for (int i = 0; i < n; i++) {

    }
}
