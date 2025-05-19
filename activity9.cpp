#include <iostream>
using namespace std;

class Mahasiswa{
    private :
        static int totalMahasiswa;
    public :
        string nama;
        string status;
        int usia;

        Mahasiswa(string pNama, int pUsia){
            nama = pNama;
            usia = pUsia;
            status = " mahasiswa baru ";
            ++totalMahasiswa;
            cout << nama << " dibuat " << " Status " << status<< endl;
            cout << endl;
        }

        ~Mahasiswa(){
            cout << nama << " dihancurkan " << endl;
            --totalMahasiswa;
            cout << endl;
        }

        static int gettotalMahasiswa() {
            return totalMahasiswa;
        }

        static void settotalMahasiswa(int a) {
            totalMahasiswa = a;
        }
};

int Mahasiswa::totalMahasiswa = 0;
   
int main(){

    cout << "total mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;

    Mahasiswa mhs1("Maman", 40);
    Mahasiswa mhs2("Agus", 34);

    Mahasiswa::settotalMahasiswa(10);

    cout << "total mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;

    {
        Mahasiswa mhs3("Budi", 19);
        Mahasiswa mhs4("Caca", 21);
        cout << "total mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;
    }
    cout << "total mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;
    return 0;
}