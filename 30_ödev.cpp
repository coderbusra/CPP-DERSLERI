#include <iostream>
#include <stdlib.h>
using namespace std;

double Topla(double s1,double s2){
	return s1+s2;
}
double Cikar(double s1,double s2){
	return s1-s2;
}
double Carp(double s1,double s2){
	return s1*s2;
}
double Bolum(double s1,double s2){
	return s1/s2;
}
double Us(double s1,double s2){
	return s1*s2;
}

int main(){
	setlocale(LC_ALL,"Turkish");//Türkçe karakter
	double sayi1,sayi2,sonuc;
	cout<<"Sayi 1 : ";
	cin>>sayi1;
	cout<<"Sayi 2 : ";
	cin>>sayi2;
for(int i=1; i<=sayi2; i++){
 	sonuc *= sayi1;
}
	
	cout<<"Toplam : "<<Topla(sayi1,sayi2)<<endl;
	cout<<"Fark : "<<Cikar(sayi1,sayi2)<<endl;
	cout<<"Çarpým : "<<Carp(sayi1,sayi2)<<endl;
	cout<<"Bölüm : "<<Bolum(sayi1,sayi2)<<endl;
	cout<<sayi1<<"^"<<sayi2<<":"<<sonuc;

}
	
