#include<bits/stdc++.h>
using namespace std;

//pass by value function
int passByValue(int num){
    cout << "Starting of the pass by value function." << endl;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    cout << "End of the pass by value function." << endl;
    return num;
}

//pass by reference function
int passByReference(int &num) {
    cout << "Starting of the pass by reference function." << endl;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    cout << "End of the pass by reference function." << endl;
    return num;
}

//main function where you will call your function
int main() {
    int num = 10;

    passByValue(num);
    //printing value of the number which is in main function just to check the updated value after running a function.
    cout << "Outside the function, inside the main function." << endl << num << endl;
    cout << "\n. \n. \n. \n." << endl;

    passByReference(num);
    //printing the value of the number which is in main function to check whether the value was being updated or not by running a pass by reference function.
    cout << "Outside the function of pass by reference, inside the main function." << endl << num << endl;
    return 0;

}