#include <iostream>
using namespace std;

int main(){
	int kabisat;
	
	cout<< "Masukkan tahun: ";
	cin>>kabisat;
	
		if (kabisat < 4){
		cout<< "Bukan tahun kabisat";
	} else if (kabisat > 3 && kabisat < 100) {
		if (kabisat%4 == 0) {
			cout<< " tahun kabisat\n";
		} else if (kabisat%4 > 0) {
			cout<< "Bukan tahun kabisat\n";
		
		}
	} else if (kabisat > 9){
		  if(kabisat%4 == 0 && kabisat%100 > 0){
		cout<< "tahun kabisat";
	} else if(kabisat%100 == 0 && kabisat%400 > 0){
		cout<< "bukan tahun kabisat";
	} else if(kabisat%400 == 0) {
			cout << "tahun kabisat";	
		}
		// Opsi terakhir //
		 else if(kabisat%400 > 0 && kabisat%100 > 0 && kabisat%4 > 0){
		 	cout << "Bukan tahun kabisat";
		 	
		 }
		 
	}
	 
}

