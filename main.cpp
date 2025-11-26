#include <iostream>
using namespace std;

int main()
{
    // tipe data_variabel[panjang index]= {index}
    string nama[6]= {"Mutiara","Gisella","Hanna","Vian","Rapita","Miskah"};
    cout << "== Daftar Nama Mahasiswa ==" << endl;
    
    for (int i=0; i<6; i++){
        cout << nama[i] << endl;
    }
    
    return 0;
}
