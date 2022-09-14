#include <iostream>
#include <stdio.h>
using namespace std;
/* Nama : Wildan Devanata Rizkyvianto
   Nim  : A11.2022.14593
   Kelp : 4116
*/
int main()

{
    int x = 19;
    float y = 172.5;
    char z = 'L' ;
    string u = "Large";

    cout << "Umur Saya : " << x << endl;
    cout << "Tinggi saya : " << y << endl;
    cout << "Ukuran Baju : " << z << " atau " << u << endl;

    int a;
    cout << "\nMasukan Angka : ";
    cin >> a;
    cout << "\nPejumlahan : " << a + x;
    cout << "\nPengurangan : " << a - x;
    cout << "\nPerkalian : " << a * x;
    return 0;
}
