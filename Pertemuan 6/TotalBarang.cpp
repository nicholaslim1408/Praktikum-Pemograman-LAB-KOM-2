#include <iostream>
using namespace std;

int main(){
    int n, totalprice=0, totalpax=0;
    cout << "Banyak data: ";
    cin >> n;
    struct list{
        int code;
        string name;
        float price;
        int pax;
    };
    list x[n];
    
    if( n <= 50 && n > 0){
        for(int i=0; i<n; i++){
            cout << "Kode " << i+1 << ": ";
            cin >> x[i].code;
            cout << "Nama " << i+1 << ": "; cin.ignore();
            getline(cin,x[i].name);
            cout << "Harga " << i+1 << ": ";
            cin >> x[i].price;
            
            cout << "Jumlah " << i+1 << ": ";
            cin >> x[i].pax;
            totalprice += x[i].price * x[i].pax;
            totalpax += x[i].pax;
        }
    }
    else{
        cout << "Tempat data max 50 dan min 1" << endl;
    }
    cout << "Jumlah Semua Barang: " << totalpax << endl;
    cout << "Harga Rata-rata Barang: " << totalprice << " / " << totalpax << " = " << totalprice / totalpax << endl;
    return 0;
}