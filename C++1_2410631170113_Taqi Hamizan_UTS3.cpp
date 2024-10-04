#include<iostream>
using namespace std;
int main()
{
int ops;
float x, y, result;

cout << "Penjumlahan (1),Pengurangan (2), Perkalian (3), Pembagian (4)" << endl;
cout << "Pilih Operasi Bilangan : ";
cin >> ops;
cout << "Masukan Angka Pertama : ";
cin >> x;
cout << "Masukan Angka Kedua : ";
cin >> y;

switch (ops)
{
    case 1:
        cout << "Hasil dari penjumlahah untuk " << x << " dan " << y << " adalah " << x + y << endl;
        break;
    case 2:
        cout << "Hasil dari pengurangan untuk " << x << " dan " << y << " adalah " << x - y << endl;
        break;
    case 3:
        cout << "Hasil dari perkalian untuk " << x << " dan " << y << " adalah " << x * y << endl;
        break;
    case 4:
        cout << "Hasil dari pembagian untuk " << x << " dan " << y << " adalah " << x / y << endl;
        break;
    default:
        cout << "Tidak Valid" << endl;
        break;
}

return 0;
}
