#include <iostream>
using namespace std;


int fibo(int n) {
    if (n <= 1) {
        return n;  
    } else {
        return fibo(n-1) + fibo(n-2);  
    }
}

int sumFibo(int n) {
    if (n <= 0) {
        return 0;  
    }
    return fibo(n) + sumFibo(n - 1);
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;  

    cout << "Jumlah deret Fibonacci adalah: " << sumFibo(n) << endl;

    return 0;
}
