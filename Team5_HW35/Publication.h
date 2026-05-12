#pragma once
#include <iostream>
using namespace std;

class Publication
{
protected:
	string name;
	string author;
	int year;

private:
	Publication();
	Publication(string name, string authorm, int year);

	virtual ~Publication();

	string getName()const;
	string getAuthor()const;
	int getYear()const;

	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);

	virtual void showInfo()const = 0;
};