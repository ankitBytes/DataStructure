#include <iostream>
using namespace std;

void printExtreme(int arr[], int size)
{

    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i];
            break;
        }
        else
        {

            cout << arr[i] << " " << arr[j] << " ";
            i++;
            j--;
        }
    }

    cout << endl;
}

int main()
{

    int arr[] = {1, 35, 52, 36, 47, 69};
    int size = 6;

    printExtreme(arr, size);

    return 0;
}