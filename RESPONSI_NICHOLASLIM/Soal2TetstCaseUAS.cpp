#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, temp, input, tempx;
    vector<int> arr;

    //TEST CASE
    n = 5;
    cout << "Input: " << n << endl;

    arr = {3, 7, 2, 8, 9};

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    temp = arr[0];
    for(int i=0; i<n; i++){
        if(temp < arr[i]){
            temp = arr[i];
        }
    } 
    
    for(int i=0; i<n; i++){
        if(temp == arr[i]){
            arr[i] = 0;
        }
    }

    tempx = arr[0];
    for(int i=0; i<n; i++){
        if(tempx < arr[i]){
            tempx = arr[i];
        }
    } 
    cout << endl << "Hasil Terbesar Kedua: " << tempx;

    return 0;
}