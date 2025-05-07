#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input(){
    while (true)    {
        cout << "Masukkan banyaknya elemen pada array (Maksimal 10)";
        cin >> nPanjang;
        if (nPanjang <= 10){
            break;
        }
        else{
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }

    cout << "\n =============================================\n";
    cout << "          Masukkan Elemen Array                 \n";
    cout << "\n =============================================\n";
    for (int i =0; i < nPanjang; i++){
        cout << "Data Ke- " << (i + 1) << " = ";
        cin >> element[i];
    }
}