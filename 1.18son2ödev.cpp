#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int dogumyili;
	cout<<"Lutfen dogum yilinizi giriniz:";
	cin>>dogumyili;
	
	if(dogumyili<2005){
		cout<<"Ehliyet icin yasiniz uygundur";
		
	}else if (dogumyili>=2005){
		cout<<"Ehliyet icin yasiniz uygundeğildir";
	
	}else{
		cout<<"Hatali tercih";
		
	} 
}
