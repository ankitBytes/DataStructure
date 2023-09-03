#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {

    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        /* code */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    cout << "Original array" << endl;
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed array" << endl;
    printArray(arr, size);

    return 0;
}