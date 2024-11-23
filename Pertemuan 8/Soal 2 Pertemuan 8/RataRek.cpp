#include <iostream>
using namespace std;

float rata(int n){
    if(n == 0){
        return 0;
    }
    
    int input;
    cout << "Angka: ";
    cin >> input;

    return input + rata(n-1);
}

int main(){
    int n;
    float total, rata2;

    cout << "N: ";
    cin >> n;

    total = rata(n);
    rata2 = total / n;

    cout << "Rata-rata: " << rata2;
    return 0;
}
