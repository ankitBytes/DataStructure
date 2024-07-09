#include<iostream>
using namespace std;


void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {25, 34, 35, 31, 95, 67, 2, 59};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Given array : ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "After sorting : ";
    printArray(arr, n);

    return 0;
}