#include <iostream>
#include <string>
using namespace std;
int main(){
	int kacinciAy;
	cout<<"Ogrenmek istediginiz ayi sayi seklinde giriniz:"<<endl;
	cin>>kacinciAy;
	switch(kacinciAy){
		case 1:
			cout<<"Ocak";
			break;
		case 2:
		    cout<<"Subat";	
		break;
		case 3:
			cout<<"Mart";
		case 4:
	     	cout<<"Nisan";
		break;
		case 5:
	    	cout<<"Mayis";
		break;
		case 6:
			cout<<"Haziran";
			break;
		case 7:
			cout<<"Temmuz";
			break;
		case 8:
			cout<<"Agustos";
			break;
		case 9:
			cout<<"Eylul";
			break;
		case 10:
			cout<<"Ekim";
			break;
		case 11:
			cout<<"Kasim";
			break;
		case 12:
			cout<<"Aralik";
			break;
		default:
			cout<<"Hatali giris";
	}
	
	
	
}
