 ///
 /// @file    cex.cc
 /// @author  Jack(715495462@qq.com)
 /// @date    2016-05-31 14:58:38
 ///
 
#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;

class cell
{

};

class cex
{
	private:
		int a;
		char b;
		float c;
		double d;
		short e[5];
		char & f;
		double &g;
		static int h;
};

int cex::h = 0;

int main()
{
	//cex c;
	cout << "sizeof() = " << sizeof(cex) << endl;

	return 0;
}


