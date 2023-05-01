#include <iostream>
#include <string>

using namespace std;
int main(){
	
	// int olarak tanýmlarsak bölme iþlemi tam çýkmaz double ile tanýmladýðýmýzda iþlemin sonucunu tam veriri ***
	double ilkSayi,ikinciSayi,topla,cikar,carp,bol;
	cout<<"ilk sayiyi giriniz:";
	cin>>ilkSayi;
	cout<<"ikinci sayiyi giriniz:";
	cin>>ikinciSayi;
	topla=ilkSayi+ikinciSayi;
	cikar=ilkSayi-ikinciSayi;
	carp=ilkSayi*ikinciSayi;
	bol=ilkSayi/ikinciSayi;
	cout<<"Toplami:"<<topla<<endl;
	cout<<"Cikarma:"<<cikar<<endl;
	cout<<"Carpma:"<<carp<<endl;
	cout<<"Bolme:"<<bol;
	
	
	
	
	
	
}
