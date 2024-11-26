#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, temp, input, tempx;
    vector<int> arr;

    cout << "Input: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "NUM: ";
        cin >> input;
        arr.push_back(input);
    }

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