#include <iostream>
using namespace std;

class Student 
{
	string name;
	string surname;
	string birth;
	string enter_date;
public:
	Student(string name, string surname, string bd, string entr);

	string GetName();
	string GetSurname();
	string GetBD();
	string GetEntr();

	void SetName(string name);
	void SetSurname(string surname);
	void SetBD(string bd);
	void SetEntr(string entr);

	void Student_Print() {
		cout << "Name: " << name << "\n"
			<< "Surname: " << surname << "\n"
			<< "Birth date: " << birth << "\n"
			<< "Enter date: " << enter_date << "\n";
	}
};

Student::Student(string name, string surname, string bd, string entr)
{
	this->name = name;
	this->surname = surname;
	birth = bd;
	enter_date = entr;
}

string Student::GetName()
{
	return name;
}

string Student::GetSurname()
{
	return surname;
}

string Student::GetBD()
{
	return birth;
}

string Student::GetEntr()
{
	return enter_date;
}

void Student::SetName(string name)
{
	this->name = name;
}

void Student::SetSurname(string surname)
{
	this->surname = surname;
}

void Student::SetBD(string bd)
{
	birth = bd;
}

void Student::SetEntr(string entr)
{
	enter_date = entr;
}


class Aspirant :public Student
{
	string theme;
public:
	Aspirant(string name, string surname, string birth, string enter_date, string theme);

	string GetTheme();
	void SetTheme(string theme);

	void Aspirant_Print() {
		Student_Print();
		cout << "Candidat work theme: " << theme << "\n";
	}
};

Aspirant::Aspirant(string name, string surname, string birth, string enter_date, string theme) :Student(name, surname, birth, enter_date)
{
	this->theme = theme;
}

string Aspirant::GetTheme()
{
	return theme;
}

void Aspirant::SetTheme(string theme)
{
	this->theme = theme;
}

int main() {
	Aspirant a("Ivan", "Ivanov", "12.03.2000", "01.09.2018", "Lemons amd Cats");
	a.Aspirant_Print();
}
