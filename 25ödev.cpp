#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	
	
	
	int sayi,tek,cift;
	cout<<"Tek mi �ift mi oldu�unu ��renmek istedi�iniz sayiyi giriniz:";
cin>>sayi;
	if(sayi%2==0){
	cout<<"Girdi�iniz sayi �ift";
	cin>>cift;
}
	else{

    cout<<"Girdi�iniz sayi tek";
    cin>>tek;
	}
	
}
