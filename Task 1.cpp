#include <iostream>
using namespace std;
void nested(int rows);
int main()
{
	int rows;
	cout <<"ENter number of rows: ";
	cin >>rows;
	nested(rows);
}
void nested(int rows)
{
	for (int i=1;i<=rows;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
}

