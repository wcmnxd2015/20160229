 ///
 /// @file    pointarr.cc
 /// @author  Jack(715495462@qq.com)
 /// @date    2016-05-31 15:59:33
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class PointArry
{
	public:
#if 1
		PointArry()
		{
			++count;
			cout << "PointArry()" << endl;
		}
#endif

		PointArry(int a, int b = 0)
		{
			++count;
			cout << "PointArry(int, int) 调用次数" << count << endl;
			_x = a;
			_y = b;
		}

		~PointArry()
		{
			cout << "~PointArry" << endl;
		}

	private:
		static int count;
		int _x;
		int _y;
};

int PointArry::count = 0;

int main()
{
	PointArry pa[3];
	PointArry pa1[2] = {PointArry(1,1), PointArry(2,2)};
	PointArry pa2[3] = {PointArry(1,1)};
}




