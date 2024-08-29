#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {

    int i, j, key;

    for (i = 1; i < n - 1; i++) {

        j = i - 1;
        key = arr[i];

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {

    int arr[] = {37, 54, 35, 27, 2, 8585};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "sorted array : ";
    printArray(arr, n);

    return 0;
}