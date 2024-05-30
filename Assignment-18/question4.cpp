// Given an array of strings. Check whether they are anagram or not.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<< "Enter the string: ";
    getline(cin, str);
    string str2;
    cout<< "Enter the second string: ";
    getline(cin, str2);
    sort(str.begin(),str.end());
    sort(str2.begin(),str2.end());
    if(str==str2){
        cout<< "The string is anagram";
    }
    else cout<< "The string is not a anagram";
    return 0;
}
