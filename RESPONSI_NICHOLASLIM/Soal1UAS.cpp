#include <iostream>
using namespace std;

int main(){
    string input;

    cout << "Input: ";
    getline(cin,input);

    int n = input.length();
    for(int i=0; i < n/2; i++){ 
        char temp = input[n - i - 1];
        input[n - i - 1] = input[i];
        input[i] = temp;
    }
    cout << "Hasil: " << input;
    return 0;
}



