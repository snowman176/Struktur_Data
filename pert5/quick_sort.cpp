#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi partisi untuk quick sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Memilih elemen terakhir sebagai pivot
    int i = (low - 1); // Indeks elemen yang lebih kecil

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Inkrementasi indeks elemen yang lebih kecil
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Fungsi quick sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // pi adalah indeks partisi
        int pi = partition(arr, low, high);

        // Sortir elemen secara terpisah sebelum dan sesudah partisi
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(const vector<int>& arr) {
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {30, 18, 10, 5, 1, 27};
    int n = arr.size();
    cout << "Array sebelum disorting: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    cout << "Array setelah disorting: ";
    printArray(arr);
    return 0;
}
