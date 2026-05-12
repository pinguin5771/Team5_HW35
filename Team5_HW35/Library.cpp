#include "Library.h"

Library::Library()
{
	name = "empty";
}

Library::Library(string name)
{
	this->name = name;
}

Library::~Library()
{
	for (auto p : publications)
		delete p;
}

string Library::getName() const
{
	return name;
}

void Library::setName(string name)
{
	this->name = name;
}

void Library::addPublication(Publication* publication)
{
	publications.push_back(publication);
	cout << "Publication added!\n";
}

void Library::deletePublication(string name)
{
	for (auto p = publications.begin(); p != publications.end(); ++p)
	{
		if ((*p)->getName() == name)
		{
			delete* p;
			publications.erase(p);
			cout << "Publication deleted!\n";
			return;
		}
	}
}

void Library::findPublication(string name)
{
	for (auto p : publications)
	{
		if (p->getName() == name)
		{
			p->showInfo();
			return;
		}
	}
	cout << "Publication not found\n";
}

void Library::showAll() const
{
	cout << "\n================ LIBRARY ===============\n";
	cout << "Name: " << name << endl;
	for (auto p : publications)
		p->showInfo();
}
