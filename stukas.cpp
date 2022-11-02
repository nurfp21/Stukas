#include <iostream>
using namespace std;

class Input {

protected:
  string nama, nama1, file;
  int nim, nim1;
  string daftar_prak[5];
};

class Data : public Input {
public:
  int total = 0;
  int k = 0;
  void akun() {
    string email[20];
    int pass[20];
    cout << "AKUN " << endl;
    cout << "Silahkan Masukkan Email Dan Password : " << endl;
  akun:
    int i = 0;
    cout << "Masukkan Email : ";
    cin >> email[i];
    cout << "Masukkan Password : ";
    cin >> pass[i];
    if (email[i] == "nur" || pass[i] == 2100018317) {
      menu();
    } else {
      cout<<"=Yang Dimasukkan Salah Silahkan Masuk Lagi!="<<endl;
      goto akun;
    }
    i++;
  }
  void menu() {
    cout << "----- MENU -----" << endl;
    cout << "1. Pendaftaran Diri" << endl;
    cout << "2. Aktivasi Akun"<< endl;
    cout << "3. Pemilihan Slot " << endl;
    cout << "4. Materi " << endl;
    cout << "5. Exit" << endl << endl;
  menu:
    cout << "Pilih menu: ";
    cin >> pilih;
    if (pilih == 1) {
      daftar_diri();
      rekursi(bnyk_matprak);
      cetak_pendaftaran();
      goto menu;
	}else if (pilih == 2){
		aktivasi();
		terkirim();
		goto menu;
    } else if (pilih == 3) {
      Slot();
      cetak_slot();
      goto menu;
    } else if (pilih == 4) {
      materi();
      goto menu;
    } else if (pilih == 5) {
      cout << "Keluar ... " << endl;
    } else {
      cout << "Menu tidak ada. Silahkan ulangi ..." << endl;
      goto menu;
    }
  }
  void daftar_diri() {
  	Data *baru, *bantu;
	  baru=new Data; 
    cout << "----- Pendataan Diri -----" << endl << endl;
    cout << "Nama\t: ";
    cin >> baru -> nama;
    cout << "NIM\t: ";
    cin >> baru -> nim;
    cout << "Semester\t: ";
    cin >> baru -> semester;
    baru -> next=NULL;
    if(awal==NULL){
    	awal = baru;
    	awal -> next = NULL;
	}else {
		bantu = awal;
		while(bantu -> next != NULL) {
			bantu = bantu -> next;
		}
		bantu -> next = baru;
	}

    cout << "----- Daftar Mata Praktikum----- " << endl << endl;
    cout << "1. Struktur Data\t\t30.000" << endl;
    cout << "2. Basis Data\t\t\t20.000" << endl;
    cout << "3. Statistika Informatika\t40.000" << endl;
    cout << "4. PBO\t\t\t\t50.000" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan banyak Mata Praktikum = ";
    cin >> bnyk_matprak;
    cout << endl;
  }
  int rekursi(int bnyk_matprak) {

    if (bnyk_matprak == 0) {
      cout << "Total = " << total << endl << endl;
      return total;
    } else {
      cout << "Masukkan nomor matprak = ";
      cin >> no_prak;
      if (no_prak == 1) {
        cout << "\tNama Praktikum : Struktur Data" << endl;
        cout << "\tHarga : Rp.30.000" << endl << endl;
        prak = "Struktur Data";
        harga = 30000;
      } else if (no_prak == 2) {
        cout << "\tNama Praktikum : Basis Data" << endl;
        cout << "\tHarga : Rp.20.000" << endl << endl;
        prak = "Basis Data";
        harga = 20000;
      } else if (no_prak == 3) {
        cout << "\tNama Praktikum : Statistika Informatika" << endl;
        cout << "\tHarga : Rp.40.000" << endl << endl;
        prak = "Statistika Informatika";
        harga = 40000;
      } else if (no_prak == 4) {
        cout << "\tNama Praktikum : PBO" << endl;
        cout << "\tHarga : Rp.50.000" << endl << endl;
        prak = "PBO";
        harga = 50000;
      }

      daftar_prak[k] = prak;
      k++;

      total = total + harga;
      return rekursi(bnyk_matprak - 1);
    }
  }

  void Slot() {
    cout << "----- Pemilihan Slot -----" << endl;
    for (int i = 0; i < bnyk_matprak; i++) {
      if (daftar_prak[i] == "Struktur Data") {
        cout << "1. Struktur Data\t Senin 07.30" << endl;
        cout << "2. Struktur Data\t Senin 09.00" << endl;
        cout << "3. Struktur Data\t Selasa 07.30" << endl;
        cout << "4. Struktur Data\t Rabu 07.30" << endl;
      slotsdata:
        cout << "Masukkan nomor slot = ";
        cin >> noslot[i];
        if (noslot[i] == 1) {
          slot[i] = "Struktur Data Senin 07.30";
        } else if (noslot[i] == 2) {
          slot[i] = "Struktur Data Senin 09.00";
        } else if (noslot[i] == 3) {
          slot[i] = "Struktur Data Selasa 07.30";
        } else if (noslot[i] == 4) {
          slot[i] = "Struktur Data Selasa 09.00";
        } else {
          goto slotsdata;
        }
      } else if (daftar_prak[i] == "Basis Data") {
        cout << "1. Basis Data\t Senin 07.30" << endl;
        cout << "2. Basis Data\t Senin 10.30" << endl;
        cout << "3. Basis Data\t Selasa 07.30" << endl;
        cout << "4. Basis Data\t Selasa 10.30" << endl;
      slotbasdat:
        cout << "Masukkan nomor slot = ";
        cin >> noslot[i];
        if (noslot[i] == 1) {
          slot[i] = "Basis Data Senin 07.30";
        } else if (noslot[i] == 2) {
          slot[i] = "Basis Data Senin 10.30";
        } else if (noslot[i] == 3) {
          slot[i] = "Basis Data Selasa 07.30";
        } else if (noslot[i] == 4) {
          slot[i] = "Basis Data Selasa 10.30";
        } else {
          goto slotbasdat;
        }
      } else if (daftar_prak[i] == "Statistika Informatika") {
        cout << "1. Statistika Informatika\t Senin 10.30" << endl;
        cout << "2. Statistika Informatika\t Senin 13.30" << endl;
        cout << "3. Statistika Informatika\t Selasa 10.30" << endl;
        cout << "4. Statistika Informatika\t Selasa 13.30" << endl;
      slotstatis:
        cout << "Masukkan nomor slot = ";
        cin >> noslot[i];
        if (noslot[i] == 1) {
          slot[i] = "Statistika Informatika Senin 10.30";
        } else if (noslot[i] == 2) {
          slot[i] = "Statistika Informatika Senin 13.30";
        } else if (noslot[i] == 3) {
          slot[i] = "Statistika Informatika Selasa 10.30";
        } else if (noslot[i] == 4) {
          slot[i] = "Statistika Informatika Selasa 13.30";
        } else {
          goto slotstatis;
        }
      } else if (daftar_prak[i] == "PBO") {
        cout << "1. PBO\t Senin 13.30" << endl;
        cout << "2. PBO\t Senin 15.00" << endl;
        cout << "3. PBO\t Selasa 13.30" << endl;
        cout << "4. PBO\t Selasa 15.00" << endl;
      slotpbo:
        cout << "Masukkan nomor slot = ";
        cin >> noslot[i];
        if (noslot[i] == 1) {
          slot[i] = "PBO Senin 13.30";
        } else if (noslot[i] == 2) {
          slot[i] = "PBO Senin 15.00";
        } else if (noslot[i] == 3) {
          slot[i] = "PBO Selasa 13.30";
        } else if (noslot[i] == 4) {
          slot[i] = "PBO Selasa 15.00";
        } else {
          goto slotpbo;
        }
      }
    }
  }
  void cetak_pendaftaran() {
  	Data *bantu;
  	bantu=awal;
    cout << endl << endl;
    while(bantu != NULL) {
    	cout << "\t __________________" << endl;
    	cout << "\t|       Data       |" << endl;
    	cout << "\t __________________" << endl << endl;
    	cout << "Nama	: " << bantu -> nama << endl;
    	cout << "NIM	: " << bantu -> nim << endl;
    	cout << "Informatika semester " << bantu -> semester << endl;
    	cout << endl;
    	cout << "Praktikum yang diambil : " << endl;
    	for (int i = 0; i < bnyk_matprak; i++) {
      	cout << "\t" << i + 1 << ". " << daftar_prak[i] << endl;
    	}
    	cout<<"Total Yang Harus Dibayar : "<<total<<endl;
    	cout<<"Silahkan Lakukan Pembayaran!"<<endl;
    	cout<<"Jika Sudah Lakukan Aktivasi Praktikum Pada Menu!"<<endl<<endl;
    	bantu = bantu -> next;
	}
  }
  
  void cetak_slot(){
  	cout << "Jadwal Praktikum yang diambil : " << endl;
    for (int i = 0; i < bnyk_matprak; i++) {
      	cout << "\t" << i + 1 << ". " << slot[i] << endl;
    }
  }
  
  void aktivasi(){
  	Data *baru, *bantu;
	  baru=new Data; 
    cout << "----- FORM AKTIVASI -----" << endl << endl;
    cout << "Nama\t: ";
    cin >> baru -> nama1;
    cout << "NIM\t: ";
    cin >> baru -> nim1;
    cout << "File PDF\t: ";
    cin >> baru -> file;
	baru -> next=NULL;
	baru -> awal=NULL;
    if(awal==NULL){
    	awal = baru;
	}else {
		bantu = awal;
		while(bantu -> next != NULL) bantu = bantu -> next;
		bantu -> next = baru;
		baru -> awal = bantu;
	}
  }
  
  void terkirim(){
  	Data *bantu;
  	bantu = awal;
  	int i=0;
  	while(bantu != NULL){
  		if(bantu -> file == "file") {
  			cout<<"Jawaban Anda Telah Direkam"<<endl;
		  }
		  i++;
		bantu = bantu -> next;
	  }
  }
  
  void materi() {
    }
private:
  Data *next, *awal=NULL;

  string slot[50];
  int noslot[25];
  int angka;
  int sem;
  string mat;
  string prodi, prak;
  int semester, no_prak, harga, bnyk_matprak;
  int pilih;
};

int main() {
  Data x;
  x.akun();

  return 0;
}
