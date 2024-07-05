#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

    int arr[] = {1, 2, 4, 4, 5, 7,8};
    int brr[] = {3, 5, 4, 2};
    int sizea = 6;
    int sizeb = 4;

    vector<int> ans;

    for(int i = 0; i < sizea; i++) {
        for(int j = 0; j < sizeb; j++) {
            if(arr[i] == brr[j]) {
                ans.push_back(arr[i]);
                brr[j] = INT_MIN;
            }
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}