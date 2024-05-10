#include <iostream>

using namespace std;

// Menggunakan metode sequential search
int sequentialSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks elemen yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, target, newValue;

    cout << "Masukkan jumlah elemen array (maksimal " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE || n <= 0) {
        cout << "Jumlah elemen tidak valid!";
        return 1;
    }

    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;
    cout << "Diganti dengan nilai? ";
    cin >> newValue;

    int index = sequentialSearch(arr, n, target);

    if (index != -1) {
        arr[index] = newValue;
        cout << "Nilai " << target << " berhasil diganti dengan " << newValue << endl;
    } else {
        cout << "Nilai " << target << " tidak ditemukan dalam array.\n";
    }

    cout << "Array setelah penggantian:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
