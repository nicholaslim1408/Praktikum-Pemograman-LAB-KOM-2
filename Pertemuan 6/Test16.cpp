#include <iostream>
#include <string>
using namespace std;

int main(){
    int input;                              // Menginput berapa banyak data
    int total_barang1 = 0, expected_total_barang1 = 0;// Jumlah barang dan jumlah barang yang diharapkan
    int harga_rata1 = 0, expected_harga_rata1 = 0;  // Total harga dan total harga yangg diharapkan
    /*
        Test Case 1
    */
    input = 3;
    struct list_barang_testcase1{
        int kode_barang;     // Untuk menyimpan kode barang
        string nama_barang;  // Untuk menyimpan nama barang
        float harga_barang;  // Untuk menyimpan harga barang
        int jumlah_barang;   // Untuk menyimpan jumlah setiap barang
    };
    list_barang_testcase1 list1[input];
    
    list1[0].kode_barang = 1;
    list1[0].nama_barang = "Mie Goreng";
    list1[0].harga_barang = 4000;
    list1[0].jumlah_barang = 1;

    list1[1].kode_barang = 2;
    list1[1].nama_barang = "Minyak Goreng";
    list1[1].harga_barang = 5000;
    list1[1].jumlah_barang = 2;

    list1[2].kode_barang = 3;
    list1[2].nama_barang = "Nasi Goreng";
    list1[2].harga_barang = 3000;
    list1[2].jumlah_barang = 2;

    expected_total_barang1 = 5;

    for(int i = 0; i < input; i++){
        total_barang1 += list1[i].jumlah_barang;
    }
    if( total_barang1 == expected_total_barang1){
        cout << "Test Case 1 Total Barang Passed! " << endl;
    }
    else{
        cout << " Test Case 1 Failed!" << endl;
    }

    for(int i = 0; i < input; i++){
        harga_rata1 += list1[i].harga_barang * list1[i].jumlah_barang;
    }

    expected_harga_rata1 = 4000;

    harga_rata1 = harga_rata1 / total_barang1;

    if( harga_rata1 == expected_harga_rata1 ){
        cout << "Test Case 1 Harga Rata-rata Passed! " << endl;
    }
    else{
        cout << " Test Case 1 Failed!" << endl;
    }

    /*
        Test Case 2
    */
    input = 5;
    int total_barang2 = 0, expected_total_barang2 = 0;// Jumlah barang dan jumlah barang yang diharapkan
    int harga_rata2 = 0, expected_harga_rata2 = 0;  // Total harga dan total harga yangg diharapkan
    struct list_barang_testcase2{
        int kode_barang;     // Untuk menyimpan kode barang
        string nama_barang;  // Untuk menyimpan nama barang
        float harga_barang;  // Untuk menyimpan harga barang
        int jumlah_barang;   // Untuk menyimpan jumlah setiap barang
    };
    list_barang_testcase2 list2[input];
    
    list2[0].kode_barang = 1;
    list2[0].nama_barang = "Mie Goreng";
    list2[0].harga_barang = 4000;
    list2[0].jumlah_barang = 1;

    list2[1].kode_barang = 2;
    list2[1].nama_barang = "Minyak Goreng";
    list2[1].harga_barang = 5000;
    list2[1].jumlah_barang = 2;

    list2[2].kode_barang = 3;
    list2[2].nama_barang = "Nasi Goreng";
    list2[2].harga_barang = 3000;
    list2[2].jumlah_barang = 2;

    list2[3].kode_barang = 4;
    list2[3].nama_barang = "Tea";
    list2[3].harga_barang = 10000;
    list2[3].jumlah_barang = 2;

    list2[4].kode_barang = 5;
    list2[2].nama_barang = "Milk Tea";
    list2[4].harga_barang = 7000;
    list2[4].jumlah_barang = 3;
    expected_total_barang2 = 10;

    for(int i = 0; i < input; i++){
        total_barang2 += list2[i].jumlah_barang;
    }
    if( total_barang2 == expected_total_barang2 ){
        cout << "Test Case 2 Total Barang Passed! " << endl;
    }
    else{
        cout << " Test Case 2 Failed!" << endl;
    }

    for(int i = 0; i < input; i++){
        harga_rata2 += list2[i].harga_barang * list2[i].jumlah_barang;
    }

    expected_harga_rata2 = 6100;

    harga_rata2 = harga_rata2 / total_barang2;
    
    if( harga_rata2 == expected_harga_rata2 ){
        cout << "Test Case 2 Harga Rata-rata Passed! " << endl;
    }
    else{
        cout << " Test Case 2 Failed!" << endl;
    }

    /*
        Test Case 3
    */
    input = 7;
    int total_barang3 = 0, expected_total_barang3 = 0;// Jumlah barang dan jumlah barang yang diharapkan
    int harga_rata3 = 0, expected_harga_rata3 = 0;  // Total harga dan total harga yangg diharapkan
    struct list_barang_testcase3{
        int kode_barang;     // Untuk menyimpan kode barang
        string nama_barang;  // Untuk menyimpan nama barang
        float harga_barang;  // Untuk menyimpan harga barang
        int jumlah_barang;   // Untuk menyimpan jumlah setiap barang
    };
    list_barang_testcase3 list3[input];
    
    list3[0].kode_barang = 1;
    list3[0].nama_barang = "Mie Goreng";
    list3[0].harga_barang = 4000;
    list3[0].jumlah_barang = 1;

    list3[1].kode_barang = 2;
    list3[1].nama_barang = "Minyak Goreng";
    list3[1].harga_barang = 5000;
    list3[1].jumlah_barang = 2;

    list3[2].kode_barang = 3;
    list3[2].nama_barang = "Nasi Goreng";
    list3[2].harga_barang = 3000;
    list3[2].jumlah_barang = 2;

    list3[3].kode_barang = 4;
    list3[3].nama_barang = "Tea";
    list3[3].harga_barang = 10000;
    list3[3].jumlah_barang = 2;

    list3[4].kode_barang = 5;
    list3[4].nama_barang = "Milk Tea";
    list3[4].harga_barang = 7000;
    list3[4].jumlah_barang = 3;
    
    list3[5].kode_barang = 6;
    list3[5].nama_barang = "Ocha";
    list3[5].harga_barang = 7000;
    list3[5].jumlah_barang = 3;

    list3[6].kode_barang = 5;
    list3[6].nama_barang = "Spring Roll";
    list3[6].harga_barang = 9000;
    list3[6].jumlah_barang = 3;

    expected_total_barang3 = 16;

    for(int i = 0; i < input; i++){
        total_barang3 += list3[i].jumlah_barang;
    }
    if( total_barang3 == expected_total_barang3 ){
        cout << "Test Case 3 Total Barang Passed! " << endl;
    }
    else{
        cout << " Test Case 3 Failed!" << endl;
    }

    for(int i = 0; i < input; i++){
        harga_rata3 += list3[i].harga_barang * list3[i].jumlah_barang;
    }

    expected_harga_rata3 = 6812.5;

    harga_rata3 = harga_rata3 / total_barang3;

    if( harga_rata3 == expected_harga_rata3 ){
        cout << "Test Case 3 Harga Rata-rata Passed! " << endl;
    }
    else{
        cout << " Test Case 3 Failed!" << endl;
    }
    return 0;
}