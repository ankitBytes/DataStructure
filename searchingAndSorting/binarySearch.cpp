#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (arr[mid] == target)
            return mid + 1;
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }

    return -1;
}

int firstOccurance(int arr[], int n, int target)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans;

    while (s <= e)
    {

        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOccurance(int arr[], int n, int target)
{

    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int ans;

    while (s <= e)
    {
        if (arr[m] == target)
        {
            ans = m;
            s = m + 1;
        }
        else if (arr[m] > target)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }

        m = s + (e - s) / 2;
    }

    return ans;
}

int totalOccurance(int arr[], int n, int target) {

    int firstoccurance = firstOccurance(arr, n, target);
    int lastoccurance = lastOccurance(arr, n, target);

    int totalOccurance = lastoccurance - firstoccurance + 1;

    return totalOccurance;
}

int peakMountain(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while(s < e) {
        if(arr[m] < arr[m+1]) {
            s = m + 1;
        } else {
            e = m;
        }

        m = s + (e - s) / 2;
    }

    return arr[s];
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int arr1[] = {10, 20, 30, 30, 30, 30, 40, 50};
    int arr2[] = {10, 40, 30, 20, 10};
    int n = 8;
    int arr2n = 5;

    int target = 30;

    cout << "Target location : " << BinarySearch(arr, n, target) << endl;
    cout << "First occurance location : " << firstOccurance(arr1, n, target) << endl;
    cout << "Last occurance location : " << lastOccurance(arr1, n, target) << endl;
    cout << "Total occurance : " << totalOccurance(arr1, n, target) << endl;
    cout << "Peak element : " << peakMountain(arr2, arr2n) << endl;

    return 0;
}