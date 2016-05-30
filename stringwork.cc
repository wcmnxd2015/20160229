 ///
 /// @file    string1.cc
 /// @author  Jack(715495462@qq.com)
 /// @date    2016-05-30 20:31:45
 ///
 
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout;
using std::endl;

class String
{
	public:
		String();
		String(const char * ps);
		String(const String & rhs);
		String & operator=(const String & rhs);
		~String();

		void print();

	private:
		char *_ps;
};

String::String()
{
	_ps = new char[strlen("NULL") + 1];  //ps需要用new分配堆空间，默认的char*不分配的话，会有段错误
	strcpy(_ps,"null");
	cout << "String()" << endl;
}

String::String(const char * ps)
{
	int len = strlen(ps);
	_ps = new char[len + 1];
	strcpy(_ps, ps);

	cout << "String(const char*)" << endl;
}

String::String(const String & rhs)
{
	_ps = new char[strlen(rhs._ps) + 1];
	strcpy(_ps, rhs._ps);

	cout << "String(const String&)" << endl;
}

String & String::operator=(const String & rhs)
{
	if(this == &rhs)
	{
		return *this;
	}
	else
	{
		delete [] _ps;
		_ps = new char[strlen(rhs._ps) + 1];
		strcpy(_ps, rhs._ps);
	}

	cout << "String & operator=" << endl;
}

String::~String()
{
	if(_ps)
	{
		delete [] _ps;
	};
	cout << "desconstruct here" << endl;
}

void String::print()
{
	if(!_ps)
	{
		cout << "NULL" << endl;
	}
	cout << _ps << endl;
}

int main()
{
	String str1;
	String str2 = "Hello,world";
	String str3 = "wangdao";
	str2 = str3;
	String str4 = str3;

	str1.print();
	str2.print();
	str3.print();
	str4.print();
}
