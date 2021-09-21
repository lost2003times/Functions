#include<iostream>
using namespace std;

void myself(string name, string city,string bff, int age = 0) {
	cout << " My name is " << name <<"." << endl;
	cout << " I live in " << city<<"." << endl;
	cout << " My best friend is " << bff <<"." << endl;
	if (age != 0)
		cout << " I am " << age << " years old." << endl;

}
void main() {
	string name, city, bff;
	int age;
	cout << " Name : ";
	cin >> name;
	cout << " City : ";
	cin >> city;
	cout << " Best friend : ";
	cin >> bff;
	cout << " Age : ";
	cin >> age;
	system("cls");
	myself(name, city, bff, age);
	
	system("pause>0");
}