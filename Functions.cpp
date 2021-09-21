#include<iostream>
using namespace std;

bool isPrimeNumber(int number) {
	for (int i = 2; i < number; i++) {
		if (number%i == 0)
			return false;

	}
		return true;
}
void main()
{
	for (int i = 1; i <= 1000; i++) {
		bool isPrime = isPrimeNumber(i);
		if(isPrime)
			cout << i << " is Prime Number.\n";
	}
	system("pause>0");
}