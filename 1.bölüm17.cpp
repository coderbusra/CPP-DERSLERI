#include <iostream>
#include <string>
using namespace std;
int main(){
	int sayiBir,sayiIki,tercih;
	cout<<"Sayibiri giriniz:";
	cin>>sayiBir;
	cout<<"Sayiikiyi giriniz:";
	cin>>sayiIki;
	cout<<"Lutfen yapmak istediginiz islemi seçiniz"<<endl;
	cout<<"Toplama islemi icin 1'e basiniz"<<endl<<"Cikarma islemi icin 2'ye basiniz"<<endl;
	cin>>tercih;
/*	switch(tercih){

// switch içindeki case yapýlarý uzun metodlarla çalýþmak için çok elveriþili deðildir
int toplam=sayiBir+sayiIki; yazdýðýmýzda
//ayný iþlemi if de de yapabilriz
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
	

