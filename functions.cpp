#include<bits/stdc++.h>
using namespace std;
int doSomething(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int num1 = 6;
    int num2 = 8;
    int result = doSomething(num1, num2);
    cout << "Your values sum = " << result << endl;
    return 0;
}