#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5];
    //Storing values in array by taking input from the user with the help of for loop.
    for(int i = 0; i < 5; i++){
        cout << "Enter value of array: " << endl;
        cin >> arr[i];
    }
    
    cout << "Values of array are: " << endl;
    //Printing values that were stored in an array by using for loop.
    for (int i = 0; i < 5; i++){
        cout << "Value of array at index " << i << ": " << arr[i] << endl;
    }

}