#include<iostream>
using namespace std;

int main(){
    int n, x = 0;
    cout << "Input: ";
    cin >> n;

    for(int i; i < n; i++){
        x = x + i+1;
    }
    cout << "Output: Sum = " << x << endl;

    cout << "(Explanation: ";
    cout << 1;
    for(int i = 2; i <= n; i++){
        cout << " + " << i;
    }
    cout << " = " << x << ")";
    return 0;

}