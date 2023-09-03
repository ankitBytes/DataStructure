#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> unionUsingRepetation(int arr[], int brr[], int sizea, int sizeb) {

    vector<int> ans;

    //inserting all the elements of the array arr
    for(int i = 0; i < sizea; i++) {
        ans.push_back(arr[i]);
    }


    //inserting all the elements of the array brr
    for(int i = 0; i < sizeb; i++) {
        ans.push_back(brr[i]);
    }

    return ans;
}

//this function is used to mark the repetation number as INT_MIN
void intersection(int arr[], int brr[], int sizea, int sizeb) {

    for(int i = 0; i < sizea; i++) {
        for(int j = 0; j < sizeb; j++) {
            if(arr[i] == brr[j]) {
                brr[j] = INT_MIN;
            }
        }
    }
}

vector<int> unionWithoutRepetation(int arr[], int brr[], int sizea, int sizeb) {

    vector<int> ans;

    intersection(arr, brr, sizea, sizeb);
    
    for(int i = 0; i < sizea; i++) {
        ans.push_back(arr[i]);
    }


    for(int i = 0; i < sizeb; i++) {
        if(brr[i] != INT_MIN) { //if the vale is not equal to INT_MIN then only push it into the ans
            ans.push_back(brr[i]);
        }
    }

    return ans;
}

int main() 
{

    int arr[] = {1, 2, 4, 4, 5, 7,8};
    int brr[] = {3, 5, 4, 2};
    int sizea = 6;
    int sizeb = 4;

    vector<int> ans = unionUsingRepetation(arr, brr, sizea, sizeb);

    cout << "Union with repetation" << endl;
    //traversing through the array after union
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;


    ans = unionWithoutRepetation(arr, brr, sizea, sizeb);

    cout << "Union without repetation" << endl;
    //traversing through the array after union
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;




    

    return 0;
}