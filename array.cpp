#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] += 5;
    }
    cout << "Values inside the funtion: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}
int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    int arr[size];
    //Storing values in array by taking input from the user with the help of for loop.
    for(int i = 0; i < size; i++){
        cout << "Enter value of array: " << endl;
        cin >> arr[i];
    }
    
    cout << "Values of array are: " << endl;
    //Printing values that were stored in an array by using for loop.
    for (int i = 0; i < size; i++){
        cout << "Value of array at index " << i << ": " << arr[i] << endl;
    }

    //Tip note: Array will always get and fetch values or go with pass by reference by default.
    doSomething(arr, size);
}