#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int n) {
    int index = 0;

    while(ch[index] != '\0')
        index++;

    return index;
}

void reverseChar(char ch[]) {
    int n = strlen(ch);
    int i = 0;
    int j = n - 1;

    while(i <= j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

void toUppercase(char ch[]) {
    for(int i = 0; i < strlen(ch); i++) {
        if(ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        } else {
            continue;
        }
    }
}

bool checkPalindrome(char ch[]) {
    int i = 0;
    int j = strlen(ch) - 1;

    while(j >= i) {
        if(ch[i] != ch[j])
            return false;

        j--;
        i++;
    }

    return true;
}

int main() {

    char ch[100];

    //using the cin and cout function for taking input and accessing the element
    // cin >> ch;
    // cout << ch << endl;

    //taking input with space as a character in the array
    cin.getline(ch, 100);
    // cout << ch << endl;

    // cout << "Length of the char array: " << findLength(ch, 100) << endl;

    //we can also use an inbuilt function to find the length of the character array
    // cout << "Length of the char array: " << strlen(ch) << endl;

    // reverseChar(ch);
    // cout << ch << endl;

    // toUppercase(ch);
    // cout << ch << endl;

    if(checkPalindrome(ch)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }

    return 0;
}