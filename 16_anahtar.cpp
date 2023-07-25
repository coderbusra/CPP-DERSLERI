#include <iostream>

#include <string>

using namespace std;
int main() {
	int gun;
	cout<<"Lutfen gunu sayi seklinde giriniz:";
	cin>>gun;
switch(gun){
	case 1:
		cout<<"Pazartesi";
		break;
	case 2:
		cout<<"Sali";
		break;
	case 3:
		cout<<"Carsamba";
		break;
	case 4:
		cout<<"Persembe";
		break;
	case 5:
		cout<<"Cuma";
		break;
	case 6:
		cout<<"Cumartesi";
		break;
	case 7:
		cout<<"Pazar";
		break;
	default:
		cout<<"Hatali bir islem yapýldý";
	}
	return 0;
	}
