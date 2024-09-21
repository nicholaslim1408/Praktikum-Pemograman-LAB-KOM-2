#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input: ";
    cin >> n;
    for(int i; i < 11; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}