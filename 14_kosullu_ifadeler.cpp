#include <iostream>
#include <string>
using namespace std;
int main(){
	string kullaniciAdi="Tolgahan";
	int sifre=1234;
	cout<<"Lütfen kullanýcý adinizi giriniz";
	cin>>kullaniciAdi;
	cout<<"Lütfen Sifrenizi Giriniz";
	cin>>sifre;
	
	
	if(kullaniciAdi=="Tolgahan" && sifre==1234){
		cout<<"Giris basarili";
		
	}else{
		cout<<"Hatali Giris yapildi";
		
	}
	
}
