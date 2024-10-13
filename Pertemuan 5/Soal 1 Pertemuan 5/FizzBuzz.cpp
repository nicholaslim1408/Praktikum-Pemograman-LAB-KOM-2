#include<iostream>
#include<vector>
using namespace std;

vector<string> numbers(int range){
    vector<string> output;
    for(int i = 1; i <= range; i++){
        if(i % 3 == 0 && i % 5 == 0){
            output.push_back("FizzBuzz");           
        }
        else if(i % 3 == 0){
            output.push_back("Fizz");
        }
        else if(i % 5 == 0){
            output.push_back("Buzz"); 
        }
        else{
            output.push_back(to_string(i)) ;
        }
    }
    return output;
}

int main(){
    int range = 100;
    vector<string> output = numbers(range);  // Define/memanggil output dari numbers
    for (const string& s : output) {    // s menampilkan semua string pada output
        cout << s << " ";
    }
    return 0;
}