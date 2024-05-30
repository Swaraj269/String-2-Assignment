// Given a sentence ‘str’, return the word that is lexicographically maximum.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    string str;
    cout<< "Enter the string: ";
    getline(cin, str);
    vector<string> vwords; 
    string words;
    stringstream ss(str);
    while(ss>>words){
        vwords.push_back(words);
    }
    sort(vwords.begin(), vwords.end());
    cout<< "The word that is lexicographically maximum is: ";
    cout<< vwords[vwords.size()-1];
}
