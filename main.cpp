#include <iostream>
using namespace std;


int main()
{

    int numbers[6];
    int sum = 0;

    cout << "Welcome to Array Calculation Program!\n";

    cout << "Enter 6 numbers\n";
    for (int h = 0; h < 6; h++)
    {
        cin >> numbers[h];
    }
    
    for (int i = 0; i < 6; i++)
    {
       sum += numbers[i];
    }
     
    cout << "Sum of Number is " << sum;
    
}
	