#include <iostream>
using namespace std;
int Triangle(int dots);
int main()
{

  int dots;

  cout << "Enter the triangle number to check its dots: ";
  cin >> dots;

  cout<<"The number of dots are: "<<Triangle(dots);

}

int Triangle(int dots)
{
  int sum = 0;
  for (int count = 1; count <= dots; count++)
  {
    sum = sum + count;
  }
  return sum;
}
