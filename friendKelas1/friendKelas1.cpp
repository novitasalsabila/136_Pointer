#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    string nama;
public:
    friend void setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string pNama) {
    a.nama = pNama;
    cout << "Nama : " << a.nama;
}

int main() {
    mahasiswa satu;
    setNama(satu, "Joko Kumat");
    cout << endl;
    system("pause");
    return 0;
};