#include <iostream>
using namespace std;

int main() {
    float hargaproduk = 50000.0f; 
  
    float *ptrHarga = &hargaproduk;

    cout << "Harga awal produk: Rp" << hargaproduk << endl;
    cout << "Alamat memori harga: " << ptrHarga << endl; 

    cout << "\n...memberikan diskon 20% melalui pointer..." << endl;
    
    *ptrHarga = *ptrHarga * 0.8;
    
    cout << "Harga setelah diskon: Rp" << hargaproduk << endl;

    return 0;
}