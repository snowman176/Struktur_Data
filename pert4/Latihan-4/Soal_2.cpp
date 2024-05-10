#include <iostream>
#include <cctype>  
#include <string>  
using namespace std;

void hitungKarakter(const string& kalimat) {
    int jumlahVokal = 0;
    int jumlahKonsonan = 0;
    int jumlahNumerik = 0;
    for (char karakter : kalimat) {
        if (isalpha(karakter)) {
            char lowerKarakter = tolower(karakter); 
            if (lowerKarakter == 'a' || lowerKarakter == 'e' || lowerKarakter == 'i' ||
                lowerKarakter == 'o' || lowerKarakter == 'u') {
                jumlahVokal++;
            } else {
                jumlahKonsonan++;
            }
        }
        else if (isdigit(karakter)) {
            jumlahNumerik++;
        }
    }
    cout << "Jumlah vokal: " << jumlahVokal <<endl;
    cout << "Jumlah konsonan: " << jumlahKonsonan << endl;
    cout << "Jumlah karakter numerik: " << jumlahNumerik << endl;
}

void cariKata(const string& kalimat, const string& kata) {
    size_t pos = kalimat.find(kata);
    if (pos != string::npos) {
        cout << "Kata \"" << kata << "\" ditemukan pada posisi " << pos << endl;
    } else {
        cout << "Kata \"" << kata << "\" tidak ditemukan dalam kalimat" << endl;
    }
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat); 
    
    string kata;
    cout << "Masukkan kata yang ingin dicari: ";
    cin >> kata;
    
    hitungKarakter(kalimat);
    cariKata(kalimat, kata);

    return 0;
}
