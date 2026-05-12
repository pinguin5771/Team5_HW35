#pragma once
#include "Publication.h"
#include <vector>
#include <algorithm>

class Library
{
private:
	string name;

	vector<Publication*> publications;

public:
	Library();
	Library(string name);
	~Library();

	string getName()const;

	void setName(string name);

	void addPublication(Publication* publication);
	void deletePublication(string name);
	void findPublication(string name);

	void showAll()const;
};