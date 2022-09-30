//Program untuk menghitung harga promosi Warung Ibu 
#include <iostream>

using namespace std;

int main()
{
  cout << "##  Kalkulator Diskon  ##" << endl;
  cout << "=============================" << endl;
  cout << endl;
 
  int total_pembelian, harga_akhir;
 
  cout << "Total Pembelian: Rp";
  cin >> total_pembelian;
  cout << endl;
 
  if ((total_pembelian >= 15000) && (total_pembelian < 25000)) {
    harga_akhir = total_pembelian - (0.05*total_pembelian);
    cout << "Selamat, anda mendapat diskon 5%" << endl;
  }
  else if (total_pembelian >= 25000)  {
    harga_akhir = total_pembelian - (0.1*total_pembelian);
    cout << "Selamat, anda mendapat diskon 10%" << endl;

  } 
  else {
    harga_akhir = total_pembelian;
  }
 
  cout << "Total bayar: Rp." << harga_akhir << endl;
 
  return 0;
}
