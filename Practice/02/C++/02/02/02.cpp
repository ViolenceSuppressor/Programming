#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int a = 3;
	int b = 3.14;//т.к. 3.14 не имеет тип int, то дробная часть отбрасывается.
	double c = 3;
	double d = 3.14;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl; 
	system("pause");
}