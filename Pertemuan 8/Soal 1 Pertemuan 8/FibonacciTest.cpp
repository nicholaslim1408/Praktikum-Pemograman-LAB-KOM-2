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
    cout << "Test Case 1" << endl;
    n = 5;
    cout << "Jumlah deret Fibonacci Test Case 1 adalah: " << sumFibo(n) << endl;
    if(sumFibo(n) == 12){
        cout << "Test Case 1 Passed" << endl;
        cout << endl;
    }
    else cout << "Failed";

    cout << "Test Case 2" << endl;
    n = 6;
    cout << "Jumlah deret Fibonacci Test Case 2 adalah: " << sumFibo(n) << endl;
    if(sumFibo(n) == 20){
        cout << "Test Case 2 Passed" << endl;
        cout << endl;
    }
    else cout << "Failed";

    cout << "Test Case 3" << endl;
    n = 7;
    cout << "Jumlah deret Fibonacci Test Case 3 adalah: " << sumFibo(n) << endl;
    if(sumFibo(n) == 33){
        cout << "Test Case 3 Passed" << endl;
        cout << endl;
    }
    else cout << "Failed";

    return 0;
}
