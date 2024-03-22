#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nama;
    int umur;
    
    void display() {
        cout << "Nama Mahasiswa: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }
};

struct Dosen {
    string nama;
    int umur;
    
    void display() {
        cout << "Nama Dosen: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }
};

int main() {
    // Class
    Mahasiswa mhs;
    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.display();
    
    // Struct
    Dosen dsn;
    dsn.nama = "Prof. Joko";
    dsn.umur = 35;
    dsn.display();
    
    return 0;
}

