#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> numbers(int range){
    vector<int> normal(range);
    vector<int> reverse(range);
    for(int i = 0; i < range; i++){
        cin >> normal[i];
    }
    for(int i = 0; i < range; i++){
        reverse[i] = normal[range - 1 - i];
    }
    return reverse;
}

int main(){
    int range = 5;
    vector<int> reverse = numbers( range );
    for(const int& s : reverse){
        cout << s << " ";
    }
    return 0;
}