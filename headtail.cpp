/*headtail.cpp*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    // Khởi tạo seed cho random
    srand(time(0));
    
    int diemNguoiChoi = 0;
    string luaChon;
    char tiepTuc;
    
    cout << "CHAO MUNG DEN VOI TRO CHOI HEAD AND TAIL!\n";
    cout << "==========================================\n\n";
    
    do {
        // Tung dong xu 0: sap, 1: ngua 
        int ketQua = rand() % 2;
        
        // Nhan du doan tu nguoi choi
        do {
            cout << "Ban doan sap hay ngua? (sap/ngua): ";
            cin >> luaChon;
            
            // Chuyen doi sang chu thuong
            for(char &c : luaChon) {
                c = tolower(c);
            }
            
            if(luaChon != "sap" && luaChon != "ngua") {
                cout << "Vui long nhap 'sap' hoac 'ngua'!\n";
            }
        } while(luaChon != "sap" && luaChon != "ngua");
        
        // Hien thi ket qua
        cout << "\nDang tung dong xu";
        for(int i = 0; i < 3; i++) {
            cout << "." << flush;
            _sleep(500); // Tam dung 0.5 giay
        }
        cout << endl;
        
        cout << "Ket qua: " << (ketQua == 0 ? "sap" : "ngua") << endl;
        
        // Kiem tra ket qua
        if((ketQua == 0 && luaChon == "sap") || 
           (ketQua == 1 && luaChon == "ngua")) {
            cout << "Chuc mung! Ban doan dung!\n";
            diemNguoiChoi++;
        } else {
            cout << "Rat tiec! Ban doan sai!\n";
        }
        
        cout << "Diem cua ban: " << diemNguoiChoi << endl;
        
        // Hoi nguoi choi co muon choi tiep khong
        cout << "\nBan co muon choi tiep khong? (y/n): ";
        cin >> tiepTuc;
        cout << "\n==========================================\n\n";
        
    } while(tolower(tiepTuc) == 'y');
    
    cout << "Cam on ban da choi! Diem cuoi cung cua ban: " << diemNguoiChoi << endl;
    
    return 0;
}