#include <iostream>
#include <algorithm>
using namespace std;

int sequentialSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks elemen yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

int binarySearch(int arr[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, target, choice;

    cout << "Masukkan jumlah elemen array (maksimal " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE || n <= 0) {
        cout << "Jumlah elemen tidak valid!";
        return 1;
    }

    cout << "Masukkan " << n << " elemen array (dalam keadaan terurut):\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    sort(arr, arr + n); // Mengurutkan array

    cout << "Pilih metode pencarian:\n";
    cout << "1. Sequential search\n";
    cout << "2. Binary search\n";
    cout << "Pilihan Anda: ";
    cin >> choice;

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;

    int index;
    switch (choice) {
        case 1:
            index = sequentialSearch(arr, n, target);
            break;
        case 2:
            index = binarySearch(arr, 0, n - 1, target);
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            return 1;
    }

    if (index != -1) {
        cout << "Nilai " << target << " ditemukan pada indeks ke-" << index << endl;
    } else {
        cout << "Nilai " << target << " tidak ditemukan dalam array.\n";
    }

    return 0;
}