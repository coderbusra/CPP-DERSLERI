#include <iostream>
using namespace std;
int main (){
	int x=10;
	int y=50;
/*	if(x>y){
		cout<<"x>y"; //e�er x>y ise x>y yazs�n istedik
		
	}else{
		cout<<"y>x"; // de�ilse yazmas�n� istedi�imiz �ey
	}
	*/
	int z=20;
	if(x>y && x>z){ //&& ve demek
		cout<<"x en buyuk sayidir";
		
	}else if(y>x && y>z){ //ust blok yanl��sa buraya bak�yor
		cout<<"y en buyuk sayidir";
	}else { // else if(z>x && z>y) 
		cout<<"z en buyuk sayidir";
		
	}
	
	
}
