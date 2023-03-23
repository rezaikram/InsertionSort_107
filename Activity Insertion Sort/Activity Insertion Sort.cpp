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
			cout << "\nArray yang anda masukkan maksimal 20 element, \n";		//Menampilkan pesan jika data lebih dari
		}
	}
	cout << endl;
	cout << "===========================" << endl;
	cout << "Masukkan Element pada Array" << endl;
	cout << "===========================" << endl;

	// Menggunakan perulangan for untuk menyimpan  data pada Array
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";		// Memasukkan atau menginput 
		cin >> arr[i];								// Masukkan nilai data n kedalam

	}
};
// Procedure Insertionsort
void insertionsort()
{

	int temp;	// Membuat data variabel data temporer atau penyimpan sementara
	int j;		//Membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++) // 1. Looping dengan i dimulai dari 1 hingga n-1
	{

		temp = arr[i];		// 2. Simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;			// 3. setting nilai j sama dengan i-1


		while (j >= 0 && arr[j] > temp)			// 4. looping while dimana nilai j lebih besar
		{										// arr[j] ke dalam variabel arr[j + 1]
			arr[j + 1] = arr[j];				// a. simpan arr[j] ke dalam variabel arr[j + 1]
			j--;								// b. decrement nilai j by 1
		}

		arr[j + 1] = temp;						// 5. simpan nilai temp ke dalam arr[j + 1]


		cout << endl;
		cout << "\nPass " << i << ": ";			// output ke layar
		for (int k = 0; k < n; k++)
		{										// looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";				// output ke layar
		}
	}
};

void display()
{
	cout << endl;												// output baris kosong
	cout << "Total Element Movement = " << n - 1 << endl;		// cout movement element
	cout << "\n============================" << endl;			// output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// output ke layar
	cout << "==============================" << endl;			// output ke layar 

	for (int j = 0; j < n; j++)
	{															// looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;									// output ke layar

	}
	cout << endl;												// output ke baris kosong
}


int main()
{
	input();				// memanggil input
	insertionsort();		// memanggil insertionsort
	display();				// memanggil display
}