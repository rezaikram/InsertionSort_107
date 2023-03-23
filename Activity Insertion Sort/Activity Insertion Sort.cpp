#include <iostream>
using namespace std;

int arr[20];	// Membuat Array dengan panjang data 20
int n;			// Membuat variabel inputan n 

void input()
{	// Procedure input
	while (true)
	{
		cout << "Masukkan jumlah data pada Array : ";		//Membuat inputan jumlah element Array
		cin >> n;											// Memanggil variabel inputan n

		if (n <= 20)
		{	// Membuat kondisi n tidak lebih dari 20
			break;

		}
		