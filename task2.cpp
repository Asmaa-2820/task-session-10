#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class shape
{	
public:
	void display()
	{
		cout << "I am a shape" << endl;
	}	
};
class circle : public shape
{
public:
	double erea(double r)
	{
		return 3.14 * r * r;
	}
};
class rectangle : public shape
{
	public:
	double perimeter(double l, double b)
	{
		return l * b;
	}
};
int main()
{
	circle c;
	c.display();
	cout << "Area of circle: " << c.erea(5) << endl;
	rectangle r;
	r.display();
	cout << "Perimeter of rectangle: " << r.perimeter(5, 6) << endl;
	

}
