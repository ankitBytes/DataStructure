#include <iostream>
using namespace std;


void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool findKey(int arr[], int n, int key) {

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return true;
    }

    return false;
}

int main() {

    int arr[] = {1, 12, 23, 34, 22};
    int size = 5;


    int key;
    cout << "Enter a key value to find " << endl;
    cin >> key;

    cout << "Given array : ";
    printArray(arr, size);

    if(findKey(arr, size, key)) {
        cout << "The given key is present" << endl;
    } else {
        cout << "The given key is not present" << endl;
    }

    return 0;
}