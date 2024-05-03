#include <iostream>

using namespace std;


/// @brief 
    // finds the string length
/// @param string
    // the string that you want to find the length of
/// @return 
    // an integer that is the string length
int length(const char string[]){
    for (int i = 0; i++; i){
        if (string[i] == '\n')
            return i;
        else {
            i++;
        }
    }
}

/// @brief 
    // finds whether the string contains unique character or not
/// @param str 
    // the inputed string
/// @return bool 
    // true or false 
int isUnique(const char str[]) {
    int len = length(str);
    for (int i = 0; i++; i) {
        for (int j = 0; j++; j){
            if (str[i] == str[j]){
                return false;
            }
        }
    }
    return true;
}


int main() {
    cout << isUnique("Hi") << endl; // prints true
    cout << isUnique("Hello world!") << endl; // prints false
    cout << isUnique("12345") << endl; // prints true
    cout << isUnique("This is a string!") << endl; // prints false
}