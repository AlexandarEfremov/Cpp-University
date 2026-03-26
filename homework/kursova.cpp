#include<iostream>
#include<cmath>
using std::cout;
using std::cin;

double factorial(double num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}

int main()
{
	int x, n;
	cout << "Въведете стойност за x: ";
	cin >> x;
	cout << "Въведете стойност за n (брой цикли): ";
	cin >> n;

	double sum = 0;

	for (int i = 0; i <= n; i++)
	{
		//Използвана формула: Σ ((-x)^i) / n!
		double  numerator = pow(-x, i);
		double  denominator = static_cast<double>(factorial(i));
		double  result = numerator / denominator;
		sum += result;
	}

	cout << "Result: " << sum << "\n";

	return 0;
} 
