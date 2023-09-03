#include <iostream>
using namespace std;

int main() {

    int arr[10];

    //Coventional method
    // for(int i = 0; i < 10; i++) {
    //     arr[i] = i+1;
    // }
    // cout << "Values are : ";
    // for(int i = 0; i < 10; i++)
    //     cout << arr[i] << " ";

    //pointer method
    for(int i = 0; i < 10; i++) {
        *(arr+i) = i+1;
    }

    cout << "Values are : ";
    for(int i = 0; i < 10; i++)
        cout << *(arr+i) << " ";

    return 0;
}