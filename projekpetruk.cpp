#include <iostream>
using namespace std;

string nama_siswa[100], judul_buku[100];
int tgl[100], bln[100], thn[100];
// inputan data 
int jmlh[100];
int index = -1;

void view_header()
{
	cout << "+----------------------------------------------------+" << endl;
	cout << "|               PROGRAM PEMINJAMAN BUKU              |" << endl;
	cout << "+----------------------------------------------------+" << endl;
}

void view_menu()
{
	cout << "| 1. Daftar Buku                                     |" << endl;
	cout << "| 2. Peminjaman Buku 							      |" << endl;
	cout << "| 3. Daftar Peminjaman                               |" << endl;
	cout << "| 4. Exit                                            |" << endl;
	cout << "+----------------------------------------------------+" << endl;
}

void Judul_buku_header()
{
	cout << "+-----------------------------------------------------+" << endl;
	cout << "|================ DAFTAR JUDUL BUKU ==================|" << endl;
	cout << "+-----------------------------------------------------+" << endl;
}

void view_judul_buku()
{
	cout << "| 1. Laskar Pelangi                                   |" << endl;
	cout << "| 2. Keluarga Cemara                                  |" << endl;
	cout << "| 3. Sang Pemimpi                                     |" << endl;
	cout << "+-----------------------------------------------------|" << endl;
}

void peminjaman()
{
	index++;
	cout << "Masukan Nama Siswa : ";
	cin >> nama_siswa[index];
	cout << "Masukan Tanggal Pinjam : ";
	cin >> tgl[index];
	cout<<"Masukkan Bulan Pinjam : ";
	cin>>bln[index];
	cout << "Masukan Tahun Pinjam : ";
	cin >> thn[index];
//	cout << "Jumlah Buku Yang di Pinjam :";
//	cin >> jmlh[index];
//	for (int i = 0; i < jmlh[index]; i++)
//	{
//		cout << "Judul Buku : ";
//		cin >> judul_buku[index][i];
//		cout<<endl;
}

void pemilihan()
{
	int pil;
		view_judul_buku();
		cout << "Pilih Judul Buku : ";
		cin >> pil;
		if (pil == 1)
		{
			cout<<"Buku yang dipilih : ";
			cout<<"Laskar Pelangi"<<endl;
			judul_buku[index] = "Laskar Pelangi";
		}
		else if(pil==2)
		{
			cout<<"Buku yang dipilih : ";
			cout<<"Keluarga Cemara"<<endl;
			judul_buku[index] = "Keluarga Cemara";
		}
		else if (pil==3)
		{
			cout<<"Buku yang dipilih : ";
			cout<<"Sang Pemimpi"<<endl;
			judul_buku[index] = "Sang Pemimpi";
		}
		else
		{
			cout<<"Buku Tidak Ada";
		}
		cout<<endl;
}

void daftar_peminjaman()
{
	cout << "+-------------------------------------------------------------------+" << endl;
	cout << "   Nama\t\t Tanggal Pinjam\t\t\t Buku  " << endl;
	cout << "+-------------------------------------------------------------------+" << endl;
	for (int j = 0; j <= index; j++)
	{
		cout << nama_siswa[j] << "\t\t   " << tgl[j] << " / " << bln[j] << " / " << thn[j] << "\t\t";
			cout << judul_buku[j] << endl << "\t\t\t\t\t";
	cout << "\n+-------------------------------------------------------------------+" << endl << endl;
	}
}

main()
{
	int pilih;
	while (pilih != 4)
	{
		view_header();
		view_menu();
		cout << "Pilih Menu : ";
		cin >> pilih;
		cout<<endl;
		switch (pilih)
		{
		case 1:
			//cout << "\nDaftar Buku" << endl;
			Judul_buku_header();
			view_judul_buku();
			break;
		case 2:
			cout << "\nPeminjaman Buku" << endl;
			peminjaman();
			Judul_buku_header();
			pemilihan();
			break;
		case 3:
			daftar_peminjaman();
			break;
			
		case 4:
			break;
		}
	}
}
