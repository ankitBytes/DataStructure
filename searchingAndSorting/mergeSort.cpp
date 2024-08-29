#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int s, int mid, int e)
{
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    int k = s;

    // copy the value of the original array into the two arrays
    for (int i = 0; i < lenLeft; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < lenRight; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge the two arrays
    int iLeft = 0;
    int iRight = 0;
    k = s; // Initialize k to s

    while (iLeft < lenLeft && iRight < lenRight)
    {
        if (left[iLeft] <= right[iRight])
        {
            arr[k] = left[iLeft];
            iLeft++;
        }
        else
        {
            arr[k] = right[iRight];
            iRight++;
        }
        k++;
    }

    while (iLeft < lenLeft)
    {
        arr[k] = left[iLeft];
        iLeft++;
        k++;
    }

    while (iRight < lenRight)
    {
        arr[k] = right[iRight];
        iRight++;
        k++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // for left side array
    mergeSort(arr, s, mid);

    // for right side array
    mergeSort(arr, mid + 1, e);

    // merge the two arrays
    merge(arr, s, mid, e);
}

int main()
{
    int arr[] = {2, 5, 3, 6, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before merge sort" << endl;
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "After merge sort" << endl;
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
