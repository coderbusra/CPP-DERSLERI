#include <iostream>
#include <string>
using namespace std;
int main(){ 
setlocale(LC_ALL,"Turkish");

int sayi;
int toplam=0;
cout<<"Girmek istediðiniz sayi miktarini belirtiniz:";
cin>>sayi;
int sayilar[sayi];

for(int i=0;i<sayi;i++){

cout<<i+1<<" inci sayiyi giriniz:";
cin>>sayilar[i];
cout<<endl;
}
cout<<"Girdiginiz sayilar\n"; //  \n endl yerine geçer
for(int i=0;i<sayi;i++){
	cout<<sayilar[i]<<endl;
	toplam+=sayilar[i];  //toplam=toplam+sayilar[i];
}
cout<<endl<<"Girdiginiz sayilarin toplami: "<<toplam;


/*
	string isimler[]={"Ali","veli","Ahmet"};
	for(int i=0;i<4;i++){
		cout<<isimler[i]<<endl;
		
	}
	
	
	
	
	
/*	int sayi;
	int toplam=0;
	cout<<"Girmek istediðiniz sayi miktarýný belirtiniz:";
	cin>>sayi;
	int sayilar[sayi]; */
	
	
	
	
	
	
	
	
	
	
}
