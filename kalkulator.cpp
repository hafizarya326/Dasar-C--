#include <iostream>
using namespace std;

int main() {

    char ulang;
    
    do{
    double angka1, angka2;
    char operasi;

    cout << "=== KALKULATOR SEDERHANA ===" << endl;
    
    cout <<"Masukkan Angka Pertama:";
    cin >> angka1;

    cout <<"Masukkan Operator (+, -, *, /): ";
    cin >> operasi;

    cout <<"Masukkan angka kedua: ";
    cin >> angka2;

    if(operasi == '+') {
        cout << "Hasil: " << angka1 + angka2 << endl;
    }else if (operasi == '-'){
        cout << "Hasil:" << angka1 - angka2 << endl;
    }else if (operasi == '*'){
        cout << "Hasil:" << angka1 * angka2 << endl;
    }else if (operasi == '/'){
        if (angka2 !=0) {
            cout << "Hasil:" << angka1 / angka2 << endl;
        }else{
            cout << "Error: Tidak bisa dibagikan kepada angka 0!" << endl;
        }
    }else {
        cout << "Operator tidak valid!" << endl;
    }

    cout << "\nApakah ingin menghitung lagi? (Y/N):";
    cin >> ulang;

    }while (ulang == 'Y' || ulang == 'y');

    cout << "Oke bre, Program dimatikan. Sampai jumpa!" << endl;
    return 0;
}