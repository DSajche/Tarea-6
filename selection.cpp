#include <iostream>  
using namespace std;
int suma(int &num1, int &num2,int num3);
void suma(int &num1,int &num2);

main (){
	int a=10,b =20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
    system("pause");	
}
