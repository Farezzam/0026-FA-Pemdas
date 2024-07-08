#include <iostream>
using namespace std;


class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangBangunan;
	int uangSemesterPertama;

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangBangunan = 0;
		uangSemesterPertama = 0;
	}
	virtual void SNBT() {
		cout << "Seleksi Nasional Berdasarkan Tes" << endl;
		return;
	}
	virtual void SNBP() {
		cout << "Seleksi nasional Berdasarkan Prestasi" << endl;
		return;
	}

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	void setUangBanguan(int nilai) {
		this->uangBangunan = nilai;
	}
	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}

	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}
};

class SNBT : public MasukUniversitas {
public:
	void Pembayaran(string Daftar, string Bangunan, string Semester) {
		Daftar = getUangPendaftaran;
		Bangunan =
	}
	void display() {
		cout << "Uang Pendaftaran = " << getUangPendaftaran << endl;
		cout << "Uang Bangunan = " << getUangBangunan << endl;
		cout << "Uang Semester Pertama = " << getUangSemesterPertama << endl;
	}
};

class SNBP : public MasukUniversitas {
public:
	string UangSemester;

	SNBP(string pDaftar, string pSemPertama) : MasukUniversitas(pDaftar), UangSemester(pSemPertama) {

	}
};

int main() {

}