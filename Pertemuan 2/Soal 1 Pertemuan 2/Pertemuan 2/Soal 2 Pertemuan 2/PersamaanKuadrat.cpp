#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a, b, c, d, D; // Variable untuk Konstanta, Diskriminan, dan Akar dari diskriminan
    float xsatu, xdua;   // Variable untuk hasil akhir d > 0
    float x;             // Variable untuk hasil akhir d = 0

    cout << "Pencarian X1X2 dari Persamaan aX2 + bX + c = 0 "<< endl;
    cout << "-----------------------------------------------"<< endl;

    cout << "X2 = ";
    cin >> a;

    cout << "X = ";
    cin >> b;
    
    cout << "C = ";
    cin >> c;

    d = b*b - 4*a*c;
    D = sqrt(d);

    if(d > 0){
        xsatu = (-b + D) / 2*a;
        xdua = (-b - D) / 2*a;
        cout << "X satu = " << xsatu << endl;
        cout << "X dua = " << xdua << endl;  
    }

    if(d == 0){
        x = -b / 2*a;
        cout << "X = " << x << endl;
    }
    
    if(d < 0){
        cout << "The Root are Complex " << endl;
    }

    return 0;
}
