#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Isi array adalah:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
    
    int target;
    cout << "Masukkan bilangan yang dicari: ";
    cin >> target;
    
    bool found = false;
    
    cout << "Bilangan " << target << " ditemukan pada index ke ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << i << " ";
            found = true;
        }
    }
    
    if (!found) {
        cout << "Tidak ditemukan";
    }
    
    cout << endl;
    
    return 0;
}
