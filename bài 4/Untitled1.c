#include <stdio.h>
#include <string>
using namespace std;

struct SinhVien {
    int id;
    string name;
    int age;
    string phoneNumber;
};
void nhapSinhVien(SinhVien& sv, int id) {
    sv.id = id;
    cout << "Nh?p t�n sinh vi�n: ";
    cin.ignore(); 
    getline(cin, sv.name);
    cout << "Nh?p tu?i sinh vi�n: ";
    cin >> sv.age;
    cout << "Nh?p s? �i?n tho?i sinh vi�n: ";
    cin.ignore();
    getline(cin, sv.phoneNumber);
}


void inThongTinSinhVien(const SinhVien& sv) {
    cout << "ID: " << sv.id << ", T�n: " << sv.name
         << ", Tu?i: " << sv.age << ", S�T: " << sv.phoneNumber << endl;
}

int main() {
    const int MAX_SINH_VIEN = 50;
    SinhVien danhSachSinhVien[MAX_SINH_VIEN];
    int soLuongSinhVien = 5; 


    for (int i = 0; i < soLuongSinhVien; ++i) {
        cout << "Nh?p th�ng tin cho sinh vi�n th? " << (i + 1) << ":" << endl;
        nhapSinhVien(danhSachSinhVien[i], i + 1);
    }

    
    cout << "\nDanh s�ch sinh vi�n:\n";
    for (int i = 0; i < soLuongSinhVien; ++i) {
        inThongTinSinhVien(danhSachSinhVien[i]);
    }

    return 0;
}

