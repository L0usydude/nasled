#pragma once
#include<iostream>
#include "group.h"
class Worker : public Group
{
private:
	int age;
	std::string name;
	std::string surname;
public:
	Worker()
	{
		age = 0;
		name = "";
		surname = "";
	}
	Worker(int newage, std::string newname, std::string news)
	{
		age = newage;
		name = newname;
		surname = news;
	}
	Worker(Worker& newworker)
	{
		age = newworker.age;
		name = newworker.name;
		surname = newworker.surname;
	}
	Worker(Worker&& newworker)
	{
		age = newworker.age;
		name = newworker.name;
		surname = newworker.surname;
		newworker.surname = "";
		newworker.name = "";
		newworker.age = 0;
	}
	int getage()
	{
		return age;
	}
	std::string getname()
	{
		return name;
	}
	std::string getsur()
	{
		return surname;
	}
	void setage(int newage)
	{
		age = newage;
	}
	void setname(std::string newname)
	{
		name = newname;
	}
	void setsur(std::string newsur)
	{
		surname = newsur;
	}
	Worker& operator=(Worker& right)
	{
		age = right.age;
		name = right.name;
		surname = right.surname;
	}
};


