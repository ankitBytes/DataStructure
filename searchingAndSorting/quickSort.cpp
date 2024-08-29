#include<iostream>
using namespace std;

void quickSort(int arr[], int s, int e) {
    if (s >= e) return;

    int pivot = arr[e];
    int i = s - 1;
    int j = s;

    while(j < e) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[e]);
    quickSort(arr, s, i - 1);
    quickSort(arr, i + 1, e);
}

int main() {

    int arr[] = {5, 1, 8, 2, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: " << endl;
    for(auto ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "After Sorting: " << endl;
    for(auto ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}