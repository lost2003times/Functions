#include<iostream>
using namespace std;
template<typename T>
//template<class type> or template<class T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;

}
int main()
{
	int a = 5, b = 4;
	cout << a << "-" << b << endl;
	swap<int>(a, b);
	cout << a << "-" << b << endl;

	char c = 'c', d = 'd';
	cout << c << "-" << d<< endl;
	swap<char>(c, d);
	cout << c << "-" << d << endl;
	system("pause>0");
}