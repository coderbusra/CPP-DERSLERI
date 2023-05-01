#include <iostream>
using namespace std;
int main (){
	int x=10;
	int y=50;
/*	if(x>y){
		cout<<"x>y"; //eğer x>y ise x>y yazsın istedik
		
	}else{
		cout<<"y>x"; // değilse yazmasını istediğimiz şey
	}
	*/
	int z=20;
	if(x>y && x>z){ //&& ve demek
		cout<<"x en buyuk sayidir";
		
	}else if(y>x && y>z){ //ust blok yanlışsa buraya bakıyor
		cout<<"y en buyuk sayidir";
	}else { // else if(z>x && z>y) 
		cout<<"z en buyuk sayidir";
		
	}
	
	
}
