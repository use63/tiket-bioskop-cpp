#include <iostream>

using namespace std;

int main() {
    int jumlahTiket;
    int hargaTiket;
    string jenisTiket;
    string judulFilm;
    string studioFilm;
    string member;

    cout << "Selamat datang di program penjualan tiket bioskop!" << endl;

    // Memilih jenis tiket
    cout << "Pilih jenis tiket (Reguler/Premier): ";
    cin >> jenisTiket;

    if (jenisTiket == "Reguler") {
        hargaTiket = 30000;
    } else if (jenisTiket == "Premier") {
        hargaTiket = 50000;
    } else {
        cout << "Jenis tiket yang Anda masukkan tidak valid." << endl;
        return 0;
    }

    // Memilih judul film
    cout << "Pilih judul film (1-5): ";
    cin >> judulFilm;

    // Memilih studio film
    cout << "Pilih studio film (1-3): ";
    cin >> studioFilm;

    // Memasukkan jumlah tiket
    cout << "Masukkan jumlah tiket yang ingin dibeli: ";
    cin >> jumlahTiket;

    // Memeriksa apakah pembeli adalah member
    cout << "Apakah Anda member? (Ya/Tidak): ";
    cin >> member;

    // Menghitung total harga tiket
    int totalHarga = hargaTiket * jumlahTiket;

    // Menerapkan diskon jika sesuai
    if (jumlahTiket > 4 || member == "Ya") {
        totalHarga -= totalHarga * 0.1; // Diskon 10%
    }

    // Menampilkan harga yang harus dibayarkan
    cout << "Harga yang harus dibayarkan: " << totalHarga << " rupiah" << endl;

    return 0;
}
