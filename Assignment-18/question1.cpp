// Input a string and concatenate with its reverse string and print it.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<< "Enter the string: ";
    getline(cin, str);
    string intial = str;
    reverse(str.begin(),str.end());
    intial += str;
    cout<< endl;
    cout<< intial;
    return 0;
}
