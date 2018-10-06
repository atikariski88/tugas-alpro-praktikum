#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
 
int main()
{
	cout<<" Berat Badan Ideal "<<endl;
	
	//masukkan data
	cout<<endl;
	cout<<endl;
	
	//deklarasi variabel
	double tb, bb;
	cout<<"Tinggi Badan : "; cin>>tb;
	
	//menghitung berat badan ideal;
	bb = tb - 100 - ( 0.1 * (tb-100) ); cout<<endl;
	cout<<"Berat Badan Ideal : "<<bb; cout<<endl;
	
getch ();
return 0;
}
