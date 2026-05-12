#pragma once
#include "Publication.h"

Publication::Publication()
{
	name = "empty";
	author = "empty";
	year = 0;
}

Publication::Publication(string name, string authorm, int year)
{
}

Publication::~Publication()
{
}

string Publication::getName() const
{
	return string();
}

string Publication::getAuthor() const
{
	return string();
}

int Publication::getYear() const
{
	return 0;
}

void Publication::setName(string name)
{
}

void Publication::setAuthor(string author)
{
}

void Publication::setYear(int year)
{
}