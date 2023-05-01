#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	
	
	
	int sayi,tek,cift;
	cout<<"Tek mi çift mi olduðunu öðrenmek istediðiniz sayiyi giriniz:";
cin>>sayi;
	if(sayi%2==0){
	cout<<"Girdiðiniz sayi çift";
	cin>>cift;
}
	else{

    cout<<"Girdiðiniz sayi tek";
    cin>>tek;
	}
	
}
