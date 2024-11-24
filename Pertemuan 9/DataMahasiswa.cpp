#include <iostream>
using namespace std;

// Struktur data siswa
struct Siswa {
    long long NISN;
    string Nama;
    int Nilai;
};

// Fungsi untuk mencetak data siswa
void printData(Siswa data[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "NISN: " << data[i].NISN << ", Nama: " << data[i].Nama << ", Nilai: " << data[i].Nilai << endl;
    }
    cout << "---------------------------------" << endl;
}

// Bubble Sort: Mengurutkan berdasarkan kriteria tertentu (descending)
void bubbleSort(Siswa data[], int size, bool sortByNISN) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Descending order berdasarkan NISN atau Nilai
            if (sortByNISN ? (data[j].NISN < data[j + 1].NISN) : (data[j].Nilai < data[j + 1].Nilai)) {
                Siswa temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort: Mengurutkan berdasarkan kriteria tertentu (descending)
void insertionSort(Siswa data[], int size, bool sortByNISN) {
    for (int i = 1; i < size; i++) {
        Siswa key = data[i];
        int j = i - 1;

        // Descending order berdasarkan NISN atau Nilai
        while (j >= 0 && (sortByNISN ? (data[j].NISN < key.NISN) : (data[j].Nilai < key.Nilai))) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// Selection Sort: Mengurutkan berdasarkan kriteria tertentu (descending)
void selectionSort(Siswa data[], int size, bool sortByNISN) {
    for (int i = 0; i < size - 1; i++) {
        int maxIdx = i;

        // Cari elemen terbesar berdasarkan NISN atau Nilai
        for (int j = i + 1; j < size; j++) {
            if (sortByNISN ? (data[j].NISN > data[maxIdx].NISN) : (data[j].Nilai > data[maxIdx].Nilai)) {
                maxIdx = j;
            }
        }

        // Tukar elemen terbesar dengan elemen di posisi saat ini
        if (maxIdx != i) {
            Siswa temp = data[i];
            data[i] = data[maxIdx];
            data[maxIdx] = temp;
        }
    }
}

int main() {
    // Data siswa
    Siswa dataSiswa[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963599682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    int size = sizeof(dataSiswa) / sizeof(dataSiswa[0]);

    cout << "Data awal:" << endl;
    printData(dataSiswa, size);

    // Bubble Sort berdasarkan NISN
    cout << "Data setelah diurutkan dengan Bubble Sort berdasarkan NISN (Descending):" << endl;
    bubbleSort(dataSiswa, size, true);
    printData(dataSiswa, size);

    // Bubble Sort berdasarkan Nilai
    cout << "Data setelah diurutkan dengan Bubble Sort berdasarkan Nilai (Descending):" << endl;
    bubbleSort(dataSiswa, size, false);
    printData(dataSiswa, size);

    // Insertion Sort berdasarkan NISN
    cout << "Data setelah diurutkan dengan Insertion Sort berdasarkan NISN (Descending):" << endl;
    insertionSort(dataSiswa, size, true);
    printData(dataSiswa, size);

    // Insertion Sort berdasarkan Nilai
    cout << "Data setelah diurutkan dengan Insertion Sort berdasarkan Nilai (Descending):" << endl;
    insertionSort(dataSiswa, size, false);
    printData(dataSiswa, size);

    // Selection Sort berdasarkan NISN
    cout << "Data setelah diurutkan dengan Selection Sort berdasarkan NISN (Descending):" << endl;
    selectionSort(dataSiswa, size, true);
    printData(dataSiswa, size);

    // Selection Sort berdasarkan Nilai
    cout << "Data setelah diurutkan dengan Selection Sort berdasarkan Nilai (Descending):" << endl;
    selectionSort(dataSiswa, size, false);
    printData(dataSiswa, size);

    return 0;
}
