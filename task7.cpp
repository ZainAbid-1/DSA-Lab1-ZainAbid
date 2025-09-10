#include <iostream>
#include <vector>
using namespace std;

// function required here to be implemented
vector <int> returnIndices (double array [], int size, double key){
    if (size == 0){
         cout << "array is an empty one" << endl;
         return {};
    }
    // using proper return type of vector and paramters as well
    vector <int> indices; // declaring a vector of int datatype
    for(int i = 0 ; i < size; i++){ // looping through the array indices
        if (array[i] == key) // condition to see if the key matches the array index
            indices.push_back(i); // inserting the array index in the vector if the key matches the array value at a certain index.
    }
    return indices;
}

void printIndices (vector <int> returnedIndices){
    if (returnedIndices.empty()){
        cout << "Key not found" << endl;
        return;
    }
    cout << endl;
     cout << "The indices at which the key is present are: " ;
    for (int i = 0 ; i < returnedIndices.size(); i++)
        cout << returnedIndices[i] << "  ";
        cout << endl;
}

// main function for testing purposes
int main(){

    cout << "Test Case 1:" << endl;
    // test case 1 for multiple occurrences
    double array1 [] = {1.5, 2.5, 3.5, 2.5, 4.5};
    double key1 = 2.5;      
    int size1 = sizeof(array1)/sizeof(array1[0]);  
    vector <int> indices1 = returnIndices(array1,size1,key1);
    printIndices(indices1);

    cout << "Test Case 2:" << endl;
    cout << endl;
    // test case 2 for key not present
     double array2 [] = {2,5,7,2,5,7};
     double key2 = 4;
     int size2 = sizeof(array2)/sizeof(array2[0]);  
    vector <int> indices2 = returnIndices(array2,size2,key2);
    printIndices(indices2);


    cout << "Test Case 3:" << endl;
    cout << endl;
    //test case 3 for empty array
    double array3 [3] = {};
    double key3 = 5;
    int size3 = sizeof(array3)/sizeof(array3[0]);  
    vector <int> indices3 = returnIndices(array3,size3,key3);
    printIndices(indices3);


    return 0;
}