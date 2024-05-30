// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<< "Enter the string: ";
    getline(cin, str);
    int max = (int)str[0]-48;
    int smax = (int)str[0]-48;
    for(int i=0; i<str.size(); i++){
        if(((int)str[i]-48) > max){
            max = ((int)str[i]-48);
        }
    }
    for(int i=0; i<str.size(); i++){
        if(((int)str[i]-48) > smax && ((int)str[i]-48) != max ){
            smax = ((int)str[i]-48);
        }
    }
    cout<< "The second largest digit in the given string is: "<< smax << endl; 
    return 0;
}
