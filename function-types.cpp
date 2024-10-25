#include<bits/stdc++.h>
using namespace std;
//void & without any parameters
void printName(){
    cout << "Hey striver!" << endl;
}

//void & parameterised function
void takeName(string name){
    cout << "Hey " << name << endl;
}
//return & parameterised function
int sumValues(int a, int b){
    return a + b;
}

int main() {
    printName();
    takeName("Sherry!");
    cout << "Enter first number: " << endl;
    int a;
    cin >> a;
    int b;
    cout << "Enter second number: " << endl;
    cin >> b;
    
    int result = sumValues(a , b);
    cout << "Sum of two values = " << result << endl;
    return 0;
}