#include <iostream>
#include <string>
using namespace std;
int main(){
	
	int sayi;
	int toplam=1;
	cout<<"Faktoriyelini almak istedi�iniz sayiyi giriniz:";
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		toplam=toplam*i;
	
	}
cout<<endl<<"girdi�iniz sayinini faktoriyeli:"<<toplam;
}



