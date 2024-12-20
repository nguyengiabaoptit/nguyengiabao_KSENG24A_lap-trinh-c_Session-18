#include <iostream>
#include <string>
using namespace std;


struct SinhVien {
    int id;
    string name;
    int age;
    string phoneNumber;
};


void inThongTinSinhVien(const SinhVien& sv) {
    cout << "ID: " << sv.id << ", Tên: " << sv.name
         << ", Tu?i: " << sv.age << ", SÐT: " << sv.phoneNumber << endl;
}


int timSinhVienTheoID(SinhVien danhSach[], int soLuong, int id) {
    for (int i = 0; i < soLuong; ++i) {
        if (danhSach[i].id == id) {
            return i; 
        }
    }
    return -1; 
}


void suaThongTinSinhVien(SinhVien& sv) {
    cout << "Nh?p tên m?i: ";
    cin.ignore(); 
    getline(cin, sv.name);
    cout << "Nh?p tu?i m?i: ";
    cin >> sv.age;
}

int main() {
    const int MAX_SINH_VIEN = 50;
    SinhVien danhSachSinhVien[MAX_SINH_VIEN] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 19, "0123451234"},
        {4, "Hoang Thi D", 22, "0987612345"},
        {5, "Pham Van E", 20, "0909876543"}
    };
    int soLuongSinhVien = 5
    cout << "Danh sách sinh viên ban d?u:\n";
    for (int i = 0; i < soLuongSinhVien; ++i) {
        inThongTinSinhVien(danhSachSinhVien[i]);
    }

    
    int idTimKiem;
    cout << "\nNh?p ID sinh viên c?n s?a: ";
    cin >> idTimKiem;

    int viTri = timSinhVienTheoID(danhSachSinhVien, soLuongSinhVien, idTimKiem);
    if (viTri == -1) {
        cout << "Không tìm

