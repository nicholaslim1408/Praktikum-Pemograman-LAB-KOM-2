#include <iostream>
using namespace std;

int main(){
    string input1, input2, input3;

    //TEST CASE 1

    input1 = "Abrakadabra";

    int n = input1.length();
    for(int i=0; i < n/2; i++){ 
        char temp = input1[n - i - 1];
        input1[n - i - 1] = input1[i];
        input1[i] = temp;
    }
    cout << "Hasil: " << input1 << endl;


    //TEST CASE 2

    input2 = "ADALAH";

    int x = input2.length();
    for(int i=0; i < x/2; i++){ 
        char temp = input2[x - i - 1];
        input2[x - i - 1] = input2[i];
        input2[i] = temp;
    }
    cout << "Hasil: " << input2 << endl;

    //TEST CASE 3

    input3 = "MaGiC";

    int a = input3.length();
    for(int i=0; i < a/2; i++){ 
        char temp = input3[a - i - 1];
        input3[a - i - 1] = input3[i];
        input3[i] = temp;
    }
    cout << "Hasil: " << input3;


    return 0;
}