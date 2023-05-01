#include <iostream>
#include <string>
using namespace std;
int main(){
	
	int sayi;
	int toplam=1;
	cout<<"Faktoriyelini almak istediðiniz sayiyi giriniz:";
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		toplam=toplam*i;
	
	}
cout<<endl<<"girdiðiniz sayinini faktoriyeli:"<<toplam;
}



