#include <iostream>
using namespace std;
void upperpart(int rows);
void lowerpart(int rows);
int main()
{
	int rows;
	cout <<"ENter desried number of rows: ";
	cin >>rows;
	upperpart(rows);
	lowerpart(rows);
	
	
}
void upperpart(int rows)
{
    
    rows =rows/2;
	for(int i=1; i<=rows;i++)
	{
		for (int space=1; space<=rows-i;space++)
		{
			cout <<" ";
	    }
		for (int j=1; j<=i;j++)
		{
			cout <<"*";
		}
		
		
		cout <<endl;
	}
}
void lowerpart(int rows)
{
	rows =rows/2;
		for(int i=rows; i>=1;i--)
	{
		for (int space=1; space<=rows-i;space++)
		{
			cout <<" ";
	    }
		for (int j=1; j<=i;j++)
		{
			cout <<"*";
		}
		
		
		cout <<endl;
	}
}

