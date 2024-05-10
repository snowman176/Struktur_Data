#include <iostream>
#include <algorithm>

using namespace std;

// Menggunakan metode binary search
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
    int n, target, newValue;

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

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;
    cout << "Diganti dengan nilai? ";
    cin >> newValue;

    int index = binarySearch(arr, 0, n - 1, target);

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