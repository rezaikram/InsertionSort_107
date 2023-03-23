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
	for (int i = 1; i < n; i++)		// Membuat looping dengan i dimulai dari 1 hingga n-1
	{

		temp = arr[i];	// 2. Simpan nilai arr[i] ke variabel sementara temp
	}

	j = i - 1;	// 3. Setting nilai j sama dengan i-1;


	while (j >= 0 && arr[j] > temp)	// 4. Looping while dimana nilai j lebih besar
		// arr[j] lebih besar daripada temp
	{
		arr[j + 1] = arr[j];	// a. simpan arr[j] ke dalam variabel arr[j + 1]
		j--;					// b. Decrement nilai j by 1
	}

	arr[j + 1] = temp; // 5. simpan nilai temp ke dalam arr[j+1]


