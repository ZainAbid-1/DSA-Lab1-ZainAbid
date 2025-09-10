#include <iostream>
#include <vector>
using namespace std;

// function required here to be implemented
vector <int> returnIndices (double array [], int size, double key){  // using proper return type of vector and paramters as well
    vector <int> indices; // declaring a vector of int datatype
    for(int i = 0 ; i < size; i++){ // looping through the array indices
        if (array[i] == key) // condition to see if the key matches the array index
            indices.push_back(i); // inserting the array index in the vector if the key matches the array value at a certain index.
    }
    return indices;
}

// main function for testing purposes
int main(){
   
    return 0;
}