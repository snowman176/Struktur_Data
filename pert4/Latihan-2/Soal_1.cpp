#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

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

    cout << "Array yang dimasukkan:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}