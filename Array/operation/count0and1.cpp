#include <iostream>
using namespace std;

void findZeroAndOne(int arr[], int size) {

    int countZero = 0;
    int countOne = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] == 1)
            countOne++;
        
        if(arr[i] == 0)
            countZero++;
    }

    cout << "Total zero present -: " << countZero << endl;
    cout << "Total one present -: " << countOne << endl;
}

int main() {

    int arr[] = {1,0,0,0,1,0};
    int size = 6;

    findZeroAndOne(arr, size);

    return 0;
}