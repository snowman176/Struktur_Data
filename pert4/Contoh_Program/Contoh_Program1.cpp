#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("clear");
    int data[8]= {8,27,9,20,10, 1997, 1996, 100}; // Kurung kurawal untuk inisialisasi array
    int cari;
    int flag = 0;
    cout<<"Masukkan data yang ingin dicari = ";
    cin>>cari;
    for(int i=0;i<8;i++){
        if(data[i]==cari) {
            flag=1;
            break; // Agar keluar dari loop setelah data ditemukan
        }
    }
    if(flag==1)
    {
        cout<<"Data ada !\n";
    }
    else{
        cout<<"Data tidak ada !\n";
    }
    return 0;
}