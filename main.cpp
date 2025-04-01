#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <cstring>

using namespace std;


class Student
{
private:
	char* PIB;
	char* Birthday;
	char* number;
	char* city;
	char* country;
	char* SchollName;
	char* SchollCity;
	char* SchollCountry;
	char* numberGr;
public:
	Student() 
	{
		PIB = new char[60];
		Birthday = new char[40];
		number = new char[30];
		city = new char[100];
		country = new char[100];
		SchollName = new char[100];
		SchollCity = new char[100];
		SchollCountry = new char[100];
		numberGr = new char[30];
	}

	~Student() 
	{
		delete[] PIB;
		delete[] Birthday;
		delete[] number;
		delete[] city;
		delete[] country;
		delete[] SchollName;
		delete[] SchollCity;
		delete[] SchollCountry;
		delete[] numberGr;
	}

void printStudent()
{
	cout << "ÔÈÎ: " << PIB << endl;
	cout << "Birthday : " << Birthday << endl;
	cout << "number: " << number << endl;
	cout << "city: " << city << endl;
	cout << "country: " << country << endl;
	cout << "SchollName: " << SchollName << endl;
	cout << "SchollCity: " << SchollCity << endl;
	cout << "SchollCountry: " << SchollCountry << endl;
	cout << "numberGr: " << numberGr << endl;
	cout << endl;
}

void setStudent()
{
	cout << "ÔÈÎ:";
	cin.getline(PIB, 60);
	cout << endl;

	cout << "Birthday:";
	cin.getline(Birthday, 40);
	cout << endl;

	cout << "number:";
	cin.getline(number, 30);
	cout << endl;

	cout << "city:";
	cin.getline(city, 100);
	cout << endl;

	cout << "country:";
	cin.getline(country, 100);
	cout << endl;

	cout << "SchollName:";
	cin.getline(SchollName, 100);
	cout << endl;

	cout << "SchollCity:";
	cin.getline(SchollCity, 100);
	cout << endl;

	cout << "SchollCountry:";
	cin.getline(SchollCountry, 100);
	cout << endl;

	cout << "numberGr:";
	cin.getline(numberGr, 30);
	cout << endl;
}
void setF(char*& F, const char* newVariant, int size)
{
	delete[] F;
	F = new char[size];
	strcpy_s(F, size ,newVariant);
}

void ChangeINFO(int choice, const char* newVariant)
{
	switch (choice)
	{
	case 1:
		setF(PIB, newVariant, 100);
		break;
	case 2:
		setF(Birthday, newVariant, 100);
		break;
	case 3:
		setF(number, newVariant, 100);
		break;
	case 4:
		setF(city, newVariant, 100);
		break;
	case 5:
		setF(country, newVariant, 100);
		break;
	case 6:
		setF(SchollName, newVariant, 100);
		break;
	case 7:
		setF(SchollCity, newVariant, 100);
		break;
	case 8:
		setF(SchollCountry, newVariant, 100);
		break;
	case 9:
		setF(numberGr, newVariant, 100);
		break;
	default:
		break;
	}
	cout << endl;
}
};
//////////////////
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	srand(time(0));

	Student student;

	student.setStudent();
	student.printStudent();
	student.ChangeINFO(1, "Serana"); 
	student.printStudent();

}