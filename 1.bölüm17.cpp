#include <iostream>
#include <string>
using namespace std;
int main(){
	int sayiBir,sayiIki,tercih;
	cout<<"Sayibiri giriniz:";
	cin>>sayiBir;
	cout<<"Sayiikiyi giriniz:";
	cin>>sayiIki;
	cout<<"Lutfen yapmak istediginiz islemi se�iniz"<<endl;
	cout<<"Toplama islemi icin 1'e basiniz"<<endl<<"Cikarma islemi icin 2'ye basiniz"<<endl;
	cin>>tercih;
/*	switch(tercih){

// switch i�indeki case yap�lar� uzun metodlarla �al��mak i�in �ok elveri�ili de�ildir
int toplam=sayiBir+sayiIki; yazd���m�zda
//ayn� i�lemi if de de yapabilriz
		case 1:
			cout<<"Toplama islemi sonucu:"<<sayiBir+sayiIki;
			break; 
		case 2:
			cout<<"Cikarma islemi sonucu:"<<sayiBir-sayiIki;
			break;
		default:
			cout<<"Hatali tercih";
		*/	
			
	
	if(tercih==1){
        int toplam=sayiBir+sayiIki;
		cout<<"Toplama islemi sonucu:"<<sayiBir+sayiIki;
	}else if(tercih==2){
			int cikarma=sayiBir-sayiIki;
			cout<<"Cikarma islemi sonucu:"<<sayiBir-sayiIki;
	}else{
		cout<<"Hatali Tercih";
		
	}	
		
		
}
	

