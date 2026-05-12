#pragma once
#include "Publication.h"

Publication::Publication()
{
	name = "empty";
	author = "empty";
	year = 0;
}

Publication::Publication(string name, string author, int year)
{
	this->name = name;
	this->author = author;
	this->year = year;
}

Publication::~Publication()
{
}

string Publication::getName() const
{
	return name;
}

string Publication::getAuthor() const
{
	return author;
}

int Publication::getYear() const
{
	return year;
}

void Publication::setName(string name)
{
	this->name = name;
}

void Publication::setAuthor(string author)
{
	this->author = author;
}

void Publication::setYear(int year)
{
	this->year = year;
}