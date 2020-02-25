#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	char b='A';
	char &c = b;
	int *x= &a ; 
	char *y = &b ;
	int**z= &x;
	
	
	cout << "a = " << a  << endl;
	cout << "b = " << &b  << endl;
	cout << "c = " << c  << endl;
	cout << "*x = " << x << endl;
	cout << "*y = " << (void *)y << endl;
	cout << "**z = " << z << endl; 
	cout << "======================================================"<< endl;
	// show address
	cout << "Address a = " << &a << endl;
	cout << "Address b = " << (void *)&b << endl;
	cout << "Address c = " << (void *)&c << endl;
	cout << "Address x = " << &x << endl;
	cout << "Address y = " << &y << endl;
	cout << "Address z = " << &z << endl;
	cout << "======================================================"<< endl;
	//change c to F 
	c='F';
	cout << "a = " << a  << endl;
	cout << "b = " << &b  << endl;
	cout << "c = " << c  << endl;
	cout << "*x = " << x << endl;
	cout << "*y = " << (void *)y << endl;
	cout << "**z = " << z << endl; 
	cout << "======================================================"<< endl;
	//change y to W by pointer
	*y= 'W';
	cout << "a = " << a  << endl;
	cout << "b = " << &b  << endl;
	cout << "c = " << c  << endl;
	cout << "*x = " << x << endl;
	cout << "*y = " << (void *)y << endl;
	cout << "**z = " << z << endl; 

	cout << "======================================================"<< endl;
	//change a to 6 by pointer
	*x= 6 ;
	cout << "a = " << a  << endl;
	cout << "b = " << &b  << endl;
	cout << "c = " << c  << endl;
	cout << "*x = " << x << endl;
	cout << "*y = " << (void *)y << endl;
	cout << "**z = " << z << endl; 
	cout << "======================================================"<< endl;
	
	//change a to 7 by pointer
	**z= 7;
	cout << "a = " << a  << endl;
	cout << "b = " << &b  << endl;
	cout << "c = " << c  << endl;
	cout << "*x = " << x << endl;
	cout << "*y = " << (void *)y << endl;
	cout << "**z = " << z << endl; 

	return 0;
}
