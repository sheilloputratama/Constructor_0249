#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
    int nim;
    string nama;
    int nilai;

public:
    mahasiswa(int nim, string nama, int nilai);
    friend class Dosen;
};
class Dosen{
private:
    string nama;
    string NIDN;
    string pangkat;
    float gaji;
public:
    Dosen(string nama, string NIDN, string pangkat, float gaji);
    void berNilai(mahasiswa* m, float nilai);
};
class staff{
private:
    string nama;
    string ID_staff;
    float gaji;
public:
    staff(string nama, string ID_staff, float gaji);
    void ubahPangkat(Dosen*d,string pangkatbaru);
};

int main(){

    
}