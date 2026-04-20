#include <iostream>
using namespace std;

class Barang{

public:
    int jumlah;
    string nama;
    string kategori;
    string tanggalProduksi;

 void printData(){
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }

}; // batas class

int main(){

    // object 1
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2026-04-20";

    // object 2
    Barang nonElektronik;
    nonElektronik.nama = "Buku";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2026-04-20";




