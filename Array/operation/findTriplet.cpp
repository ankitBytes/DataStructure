#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int>arr{10, 20, 30, 40};
    int sum = 90;
    int flag = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {

                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "The pair is : " << arr[i] << ", " << arr[j] << ", " << arr[k];
                    flag = 1;
                }
            }
        }
    }
        cout << endl;
        if(!flag) {
            cout << "No pairs found :)" << endl;
        }

    return 0;
}