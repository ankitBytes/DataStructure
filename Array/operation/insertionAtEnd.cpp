#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int insertElement(int arr[], int n, int key, int capacity) {

    if(n >= capacity)
        return n;

    n[arr] = key;

    return (n+1);
}

int main() {

    int arr[20] = {1, 2, 3, 4, 5};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    int i, key = 54;

    cout << "Array before inserting : " ;
    printArray(arr, n);

    n = insertElement(arr, n, key, capacity);

    cout << "Array after insertion : ";
    printArray(arr, n);

    return 0;
}