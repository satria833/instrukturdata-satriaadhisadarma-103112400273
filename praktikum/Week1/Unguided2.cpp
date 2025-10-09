#include <iostream>
#include <vector>
using namespace std;

string angkaKeTulisan(int n) {
    vector<string> satuan = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan",
                             "sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas",
                             "enam belas","tujuh belas","delapan belas","sembilan belas"};
    vector<string> puluhan = {"", "", "dua puluh","tiga puluh","empat puluh","lima puluh",
                              "enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};

    if (n < 20) return satuan[n];
    else if (n < 100) {
        int p = n / 10;
        int s = n % 10;
        if (s == 0) return puluhan[p];
        else return puluhan[p] + " " + satuan[s];
    }
    else if (n == 100) return "seratus";
    else return "Tidak valid";
}

int main() {
    int n;
    cout << "Masukkan angka (0-100): ";
    cin >> n;

    if (n >= 0 && n <= 100)
        cout << n << " : " << angkaKeTulisan(n) << endl;
    else
        cout << "Angka harus antara 0 sampai 100" << endl;

    return 0;
}
