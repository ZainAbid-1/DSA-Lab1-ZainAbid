#include <iostream>
#include <string>
using namespace std;

// implementation for finding the occurrence
int findOccurrenceOfString(string str, string key){
    bool check = false;
    if (key.size()==0){ // chcecking if string is empty or not
        cout << "The key string is empty"<< endl;
         return -1;
    }
    for (int i = 0 ; i <= str.size() - key.size() ; i++){ //  used proper iteration limit to ensure that out of bound exceptions are not generated
        if (str[i] == key[0]){
            for (int j = 0 ; j < key.size(); j++){ // simply means that if one character of the two strings are same then we will check the remaining characters as well to be equal
                if (str [i+j] == key[j]){ 
                    check = true; 
                }
                else{
                     check = false;
                     break;
                }
            }
        }
        if(check){ // by using the check boolean variable, we will see if it has found a substring inside a string or not and then return the index
        return i;
    }
    }
    cout << "Key not found" << endl;
    return -1;
}

int main(){
    // test cases to be implemented
    return 0;
}
