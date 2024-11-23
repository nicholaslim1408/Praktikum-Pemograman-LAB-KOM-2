#include <iostream>
using namespace std;

float rata(int n, int inputs[], int index) {
    if (n == 0) {
        return 0;
    }

    // Ambil nilai dari array `inputs` berdasarkan index saat ini
    int input = inputs[index];

    return input + rata(n - 1, inputs, index + 1);
}

int main() {
    // Test case otomatis
    int testCases = 3; // Jumlah test case
    int n[] = {5, 10, 4}; // Jumlah elemen untuk tiap test case
    int inputs[][10] = {
        {2, 4, 6, 8, 10},  // Test case 1
        {1, 3, 5, 7, 9, 11, 13, 15, 17,19},      // Test case 2
        {10, 20, 30, 40}       // Test case 3
    };

    for (int t = 0; t < testCases; t++) {
        // Hitung total dan rata-rata untuk test case ke-t
        float total = rata(n[t], inputs[t], 0);
        float rata2 = total / n[t];

        // Tampilkan hasil untuk test case ke-t
        cout << "Test Case #" << t + 1 << ":\n";
        cout << "Inputs: ";
        for (int i = 0; i < n[t]; i++) {
            cout << inputs[t][i] << " ";
        }
        cout << "\nRata-rata: " << rata2 << endl;
        if(rata2 == 6 || rata2 == 10 || rata2 == 25){
            cout << "Passed!" << endl;
        }
        cout << "------------------\n";
    }

    return 0;
}