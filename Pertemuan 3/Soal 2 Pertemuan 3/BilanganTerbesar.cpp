#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout << "Input n = ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Input = ";
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n-1];
    return 0;
}