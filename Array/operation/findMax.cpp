#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int size) {

    int max = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        } 
    }

    return max;
}

int main() {

    int arr[] = {12, 25, 27, 46, 85, 24};
    int size = 6;

    int max = 0;
    max = findMax(arr, size);

    cout << "The highest element present : " << max << endl;


    return 0;
}