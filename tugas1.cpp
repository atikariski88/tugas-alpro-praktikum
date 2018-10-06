#include <stdio.h>
#include <conio.h>
#include <iostream>

 using namespace std;
 
int main ()
{
	//deklarasi variabel 
	double meter, yard, kaki, inchi;
	
	//masukkan data
	cout<<"Konversi dari Meter ke Yard, Kaki, dan Inchi"<<endl;
	cout<<"Input Meter : ";
	cin>>meter;
	
		//menghitung konversi
		//konversi meter ke yard
			yard = meter / 0.9144;
		//konversi meter ke kaki
			kaki = meter / 0.3048;
		//konversi dari meter ke inchi
			inchi = meter / 0.0254;
			
		//menampilkan hasil
		cout<<meter<<" Meter = "<<yard<<"Yard"<<endl;
		cout<<meter<<" Meter = "<<kaki<<"Kaki"<<endl;
		cout<<meter<<" Meter = "<<inchi<<"Inchi"<<endl;
		
return 0;
}
