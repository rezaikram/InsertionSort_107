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
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	// Menggunakan perulangan for untuk menyimpan data pada array
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	
	
	}

}
// Procedure Insertionsort
void insertionsort()
{

	int temp;	// Membuat variable daya temporer atau penyimpanan sementara
	int j;		// membuat variable j sebagai tanda


