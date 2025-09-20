#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class box
{
	private:
		int length;
public:
	box()
	{
		length=10;
	}
	friend void printlength(box b);
};
void printlength(box b)
{
	cout<<"Length of box is: "<<b.length<<endl;
}
int main()
{
	box b;
	printlength(b);
}
