#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	if (n <= 3) 
    {
		cout << "Invalid input." << endl;
		return 0;
	}

	int firstNumber = 1, secondNumber = 1;
	cout << firstNumber << " " << secondNumber << " ";

	while (firstNumber + secondNumber < n) 
    {
		cout << firstNumber + secondNumber << " ";
		int temp = firstNumber;
		firstNumber = secondNumber;
		secondNumber = firstNumber + temp;
	}
}