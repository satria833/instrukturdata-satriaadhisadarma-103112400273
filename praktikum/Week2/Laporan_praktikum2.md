# Template Laporan Praktikum Struktur Data

## 1. Nama, NIM, Kelas
- **Nama**: Satria Adhi Sadarma
- **NIM**: 103112400273
- **Kelas**: IF-12-05

## 2. Motivasi Belajar Struktur Data
[Mempelajari struktur data itu sebenarnya adalah latihan otak untuk memahami cara data bisa direpresentasikan dan diproses dengan efisien; ini bukan hanya soal memahami konsep berbagai bentuk abstraksi data, tapi juga memerlukan kemampuan untuk menganalisis kompleksitas algoritma yang menghubungkan kecepatan eksekusi dengan penggunaan memori. Jadi, menguasai struktur data akan memberikan seseorang dasar teori sekaligus keterampilan praktis dalam merancang solusi perangkat lunak yang elegan, efisien, dan bisa beradaptasi dengan masalah komputasi di dunia nyata.]

## 3. Dasar Teori
Memahami struktur data itu bukan hanya soal menguasai teori tentang penyimpanan dan pengelolaan informasi dalam bentuk yang abstrak, tapi juga merupakan langkah dasar untuk membentuk pola pikir komputasional yang teratur. Di sini, setiap konsep seperti array, linked list, stack, queue, tree, hingga graph, sebenarnya melatih kita untuk berpikir tentang efisiensi, kompleksitas waktu dan ruang, serta bagaimana memilih representasi yang paling tepat untuk menyelesaikan masalah nyata dengan cara yang optimal; dengan kata lain, belajar struktur data adalah proses mempersiapkan diri agar bisa menjembatani keterbatasan mesin dengan kreativitas manusia dalam merancang solusi yang elegan, efisien, dan dapat diandalkan.

## 4. Guided
### 4.1 Guided 1
![alt text] (image-1.png)
[Program ini adalah sebuah implementasi sederhana dalam bahasa C++ yang menggunakan array untuk menyimpan jumlah buku yang dibaca setiap hari selama satu minggu, kemudian melalui perulangan for menghitung total buku yang dibaca dengan menjumlahkan setiap elemen array ke variabel akumulator totalBuku, sekaligus menampilkan laporan harian berupa jumlah buku per hari dengan format “Hari ke-i: x buku”, dan setelah perulangan selesai, menampilkan total keseluruhan buku yang dibaca selama seminggu, sehingga program ini menggabungkan konsep dasar pemrograman seperti deklarasi array, inisialisasi nilai, penggunaan loop iteratif, operasi aritmatika penjumlahan, serta output terformat menggunakan cout untuk memberikan laporan lengkap aktivitas membaca buku dalam satu minggu.]

output :
![alt text] (image.png)

### 4.2 Guided 2
![alt text] (image-2.png)
[Program ini merupakan implementasi konsep pointer dalam C++ yang mendemonstrasikan bagaimana sebuah variabel bertipe float yang menyimpan harga awal produk dapat dimanipulasi secara langsung melalui alamat memorinya dengan menggunakan pointer, di mana pointer ptrharga diinisialisasi untuk menunjuk ke variabel hargaproduk, kemudian nilai harga awal ditampilkan bersama alamat memori yang direferensikan, dan selanjutnya dilakukan operasi aritmatika berupa pengurangan harga sebesar 20% melalui dereferensi pointer (*ptrharga *= 0.8), sehingga harga produk berubah tanpa mengakses variabel aslinya secara langsung, yang sekaligus memperlihatkan prinsip dasar pemrograman terkait pengelolaan memori, manipulasi data, dan penggunaan operator dereferensi dalam konteks pengolahan nilai variabel melalui pointer.]

output :
![alt text] (image-3.png)


### 4.3 Guided 3
![alt text] (image-7.png)

[Program ini merupakan implementasi konsep modularisasi dalam C++ yang memanfaatkan fungsi untuk memisahkan logika perhitungan dan tampilan, di mana fungsi hitungRataRata digunakan untuk menghitung nilai rata-rata dari dua komponen penilaian (tugas dan UTS), fungsi cetakProfil bertugas menampilkan informasi nama siswa beserta nilai yang diperoleh, dan fungsi berikanNilaiBonus yang menggunakan mekanisme passing by reference untuk menambahkan bonus nilai secara langsung pada variabel asli, sehingga melalui pemanggilan fungsi-fungsi tersebut di dalam main(), program mampu menampilkan profil awal siswa, memberikan bonus nilai, dan menampilkan profil setelah bonus, sekaligus mendemonstrasikan prinsip dasar pemrograman terstruktur, pengelolaan data melalui parameter, serta manipulasi nilai menggunakan referensi.]

output:
![alt text] (image-6.png)


## 5. Unguided
### 5.1 Unguided 1
![alt text] (image-8.png)
![alt text] (image-9.png)

[Program ini merupakan implementasi konsep pengelolaan data menggunakan array dan pointer dalam C++, di mana array digunakan untuk menyimpan stok buku dari beberapa jenis, kemudian melalui fungsi hitungTotalStok dilakukan akumulasi seluruh stok, fungsi cariStokPalingSedikit mengembalikan pointer ke elemen dengan stok terendah, dan fungsi tambahStokBonus memanfaatkan dereferensi pointer untuk menambahkan bonus stok secara langsung pada elemen yang ditunjuk, sementara fungsi cetakStok bertugas menampilkan isi array dalam format terstruktur, sehingga keseluruhan program mendemonstrasikan prinsip modularisasi, manipulasi data melalui alamat memori, serta penerapan logika iteratif untuk pengolahan informasi inventaris.]

output: 
![alt text] (image-10.png)


### 5.2 Unguided 2
![alt text] (image-8.png)
[Program ini merupakan implementasi sistem konversi numerik ke teks yang mengubah angka menjadi representasi tulisan dalam bahasa Indonesia dengan rentang 0-100, dimana program menggunakan dua vektor string yaitu satuan untuk menyimpan representasi angka 0-19 dan puluhan untuk menyimpan representasi kelipatan sepuluh, kemudian melalui fungsi angkakerulisan() program melakukan pengecekan bertingkat menggunakan struktur if-else - untuk angka di bawah 20 langsung mengambil dari vektor satuan, untuk angka 20-99 melakukan dekomposisi menjadi puluhan dan satuan kemudian menggabungkannya, serta penanganan khusus untuk angka 100 dengan return "seratus", sementara dalam fungsi main() program melakukan validasi input untuk memastikan angka berada dalam rentang yang valid sebelum memproses konversinya.]

output: 
![alt text] (image-9.png)

### 5.3 Unguided 3
![alt text] (image-10.png)
[Program ini merupakan implementasi pembuatan pola numerik simetris yang menampilkan urutan angka menurun dan naik dengan separator bintang di tengah, dimana program menerima input integer n dari pengguna yang menentukan ukuran pola, kemudian menggunakan nested loop dengan loop luar for (int i = n; i >= 1; i--) untuk mengontrol jumlah baris dan dua loop dalam - yang pertama for (int j = i; j >= 1; j--) untuk mencetak angka menurun dari i ke 1, diikuti separator *, dan loop kedua for (int j = 1; j <= i; j++) untuk mencetak angka naik dari 1 ke i, sehingga membentuk pola simetris yang semakin mengecil di setiap barisnya dan diakhiri dengan satu bintang tambahan sebagai penutup pola.]

output:
![alt text] (image-11.png)

## 6. Kesimpulan
[Praktikum struktur data ini secara komprehensif telah berhasil mendemonstrasikan penguasaan konsep-konsep fundamental pemrograman C++ yang meliputi implementasi berbagai struktur kontrol (kondisional if-else untuk sistem diskon dan validasi pembagian, perulangan for dan nested loop untuk pembuatan pola numerik), manipulasi variabel dengan tipe data yang tepat, handling error dan validasi input, optimasi kode menggunakan operator increment prefix, konversi satuan suhu, operasi aritmatika dasar, transformasi angka ke representasi verbal, serta pembuatan pola simetris, yang secara kolektif membentuk fondasi essential yang kokoh untuk mempelajari materi struktur data dan algoritma yang lebih advanced di masa depan.]



## 7. week 2
### 7.1 Guided 1
![alt text] (image-12.png)
[Program ini adalah sebuah implementasi sederhana dalam bahasa C++ yang menggunakan array untuk menyimpan jumlah buku yang dibaca setiap hari selama satu minggu, kemudian melalui perulangan for menghitung total buku yang dibaca dengan menjumlahkan setiap elemen array ke variabel akumulator totalBuku, sekaligus menampilkan laporan harian berupa jumlah buku per hari dengan format “Hari ke-i: x buku”, dan setelah perulangan selesai, menampilkan total keseluruhan buku yang dibaca selama seminggu, sehingga program ini menggabungkan konsep dasar pemrograman seperti deklarasi array, inisialisasi nilai, penggunaan loop iteratif, operasi aritmatika penjumlahan, serta output terformat menggunakan cout untuk memberikan laporan lengkap aktivitas membaca buku dalam satu minggu.]

outtput :
![alt text] (image-13.png)
 


## 9. Referensi
1. [https://www.programiz.com/cpp-programming/operators]
2. [https://www.geeksforgeeks.org/vector-in-cpp-stl/]
3. [https://www.javatpoint.com/nested-loops-in-cpp]