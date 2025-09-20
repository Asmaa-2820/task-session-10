#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class math
{
public:
	static int add(int a, int b)
	{
		return a + b;
	}
};
int main()
{

	cout <<"the sum = "<< math::add(10, 20);

}
