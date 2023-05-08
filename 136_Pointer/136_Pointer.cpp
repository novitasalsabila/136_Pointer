#include <iostream>
using namespace std;


class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No induk =" << nim << endl;
	}
};
int main() {
	mahasiswa mhs(1);//object mhs
	mhs.showNim();//Member access operator

	mahasiswa& refMhs = mhs; //Pointer reference refMhs
	refMhs.nim = 2; //Member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //Pointer deference pMhs
	pMhs->nim = 3; //Arrow operator
	mhs.showNim();
	return 0;
}