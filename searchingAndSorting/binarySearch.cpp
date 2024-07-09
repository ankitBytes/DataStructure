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

int totalOccurance(int arr[], int n, int target)
{

    int firstoccurance = firstOccurance(arr, n, target);
    int lastoccurance = lastOccurance(arr, n, target);

    int totalOccurance = lastoccurance - firstoccurance + 1;

    return totalOccurance;
}

int peakMountain(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }

        m = s + (e - s) / 2;
    }

    return arr[s];
}

int pivotElement(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int ans;

    while (s <= e)
    {

        if (arr[m] < arr[m - 1])
        {
            return m - 1;
        }
        else if (arr[m] > arr[m + 1] || s == e)
        {
            return m;
        }
        else if (arr[m] < arr[0])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }

        m = s + (e - s) / 2;
    }

    return -1;
}

int findQuotient(int divisor, int dividend)
{

    int s = 0;
    int e = dividend;
    int m = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if ((divisor * m) == dividend)
            return m;
        else if ((divisor * m) > dividend)
            e = m - 1;
        else
        {
            s = m + 1;
            ans = m;
        }
        m = s + (e - s) / 2;
    }

    return ans;
}

int nearlySortedArray(int arr[], int n, int target)
{

    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {

        if (m > 0 && arr[m - 1] == target)
            return m - 1;
        else if (arr[m] == target)
            return m;
        else if (m < n && arr[m + 1] == target)
            return m + 1;
        else if (arr[m] > target)
        {
            e = m - 2;
        }
        else
            s = m + 2;

        m = s + (e - s) / 2;
    }

    return -1;
}

int oddOccuring(int arr[], int n) {

    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while(s <= e) {
        if(s == e)
            return arr[s];
        else if(m % 2 == 0) {
            if(arr[m] == arr[m+1])
                s = m + 2;
            else
                e = m;
        } else {
            if(arr[m] == arr[m-1])
                s = m + 1;
            else
                e = m - 1;
        }

        m = s + (e - s) / 2;
    }

    return -1;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int arr1[] = {10, 20, 30, 30, 30, 30, 40, 50};
    int arr2[] = {10, 40, 30, 20, 10};
    int arr3[] = {50, 60, 10, 20, 30, 40};
    int arr4[] = {20, 10, 30, 50, 70, 60};
    int arr5[] = {4, 1, 1, 3, 3, 6, 6};
    int n = 8;
    int arr2n = 5;
    int arr5n = 7;

    int divisor = -5;
    int dividend = -70;

    int target = 30;

    cout << "Target location : " << BinarySearch(arr, n, target) << endl;
    cout << "First occurance location : " << firstOccurance(arr1, n, target) << endl;
    cout << "Last occurance location : " << lastOccurance(arr1, n, target) << endl;
    cout << "Total occurance : " << totalOccurance(arr1, n, target) << endl;
    cout << "Peak element : " << peakMountain(arr2, arr2n) << endl;
    cout << "Pivot element: " << pivotElement(arr3, 6) << endl;
    cout << "Nearly sorted array : " << nearlySortedArray(arr4, 7, 70) << endl;
    cout << "Odd ocuuring element : " << oddOccuring(arr5, arr5n) << endl;

    int ans = findQuotient(abs(divisor), abs(dividend));

    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = 0 - ans;
    }

    cout << "Ans of " << dividend << "/" << divisor << " is " << ans << endl;

    return 0;
}