#include<iostream>
using namespace std;
void Amplify(int number);
int main()
{
	
 int number;

cout<<"ENTER NUMBER to amplify the sequence: ";
cin>>number;

Amplify(number);
 
}

void Amplify(int number)
{
    int amplify;
    for(int i=1; i<=number ; i++)
	{
    	
        if(i%4==0)
		{
            amplify=i*10;
            cout<<amplify;

        if(i!=number)
		{
            cout<<",";
        }
        continue;
        }
         cout<<i<<",";
    
    }
}
