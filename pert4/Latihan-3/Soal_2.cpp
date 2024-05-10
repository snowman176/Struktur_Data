#include <iostream>
using namespace std;

int main() {
    int row, col;
    
    cout << "Masukkan jumlah baris array: ";
    cin >> row;
    
    cout << "Masukkan jumlah kolom array: ";
    cin >> col;
    
    int arr[row][col];
    
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Data Array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int target;
    cout << "Masukkan bilangan yang dicari: ";
    cin >> target;
    
    bool found = false;
    
    cout << "Bilangan " << target << " berada pada posisi ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                cout << "[" << i << "][" << j << "]";
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    if (!found) {
        cout << "Data tidak ditemukan";
    }
    
    cout << endl;
    
    return 0;
}
