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
    cout << "Nh?p tên sinh viên: ";
    cin.ignore(); 
    getline(cin, sv.name);
    cout << "Nh?p tu?i sinh viên: ";
    cin >> sv.age;
    cout << "Nh?p s? ði?n tho?i sinh viên: ";
    cin.ignore();
    getline(cin, sv.phoneNumber);
}


void inThongTinSinhVien(const SinhVien& sv) {
    cout << "ID: " << sv.id << ", Tên: " << sv.name
         << ", Tu?i: " << sv.age << ", SÐT: " << sv.phoneNumber << endl;
}

int main() {
    const int MAX_SINH_VIEN = 50;
    SinhVien danhSachSinhVien[MAX_SINH_VIEN];
    int soLuongSinhVien = 5; 


    for (int i = 0; i < soLuongSinhVien; ++i) {
        cout << "Nh?p thông tin cho sinh viên th? " << (i + 1) << ":" << endl;
        nhapSinhVien(danhSachSinhVien[i], i + 1);
    }

    
    cout << "\nDanh sách sinh viên:\n";
    for (int i = 0; i < soLuongSinhVien; ++i) {
        inThongTinSinhVien(danhSachSinhVien[i]);
    }

    return 0;
}

