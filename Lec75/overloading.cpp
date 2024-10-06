//function overloading

#include<iostream>
using namespace std;

class Area // Class name fixed
{
  public:
  // Function to calculate the area of a circle
  int calculatorarea(int r) 
  {
    return 3.14 * r * r; 
  }
  
  // Function to calculate the area of a rectangle
  int calculatorarea(int l, int b) 
  {
    return l * b;
  }
};

int main()
{
  Area A1, A2; // Fixed class name usage
  
  cout << A1.calculatorarea(4) << endl; // Fixed function name
  cout << A2.calculatorarea(3, 4) << endl; // Fixed function name
  
  return 0;
}
