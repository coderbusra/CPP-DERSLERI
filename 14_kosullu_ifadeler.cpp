#include <iostream>
#include <string>
using namespace std;
int main(){
	string kullaniciAdi="Tolgahan";
	int sifre=1234;
	cout<<"L�tfen kullan�c� adinizi giriniz";
	cin>>kullaniciAdi;
	cout<<"L�tfen Sifrenizi Giriniz";
	cin>>sifre;
	
	
	if(kullaniciAdi=="Tolgahan" && sifre==1234){
		cout<<"Giris basarili";
		
	}else{
		cout<<"Hatali Giris yapildi";
		
	}
	
}
