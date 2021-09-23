#pragma once
#include <iostream>
#include "Worker.h"
class Group
{
private:
	std::string nameofgroup;
	Worker* massofworkers;//проблема
	int sizeofgr;
public:
	Group()
	{
		nameofgroup = "";
		massofworkers = nullptr;
		sizeofgr = 0;
	}
	Group(std::string newname, Worker* newmass, int sizeofnewmass)
	{
		nameofgroup = newname;
		massofworkers = new Worker[sizeofnewmass];
		for (int i = 0; i < sizeofnewmass; i++)
		{
			massofworkers[i] = newmass[i];
		}
		sizeofgr = sizeofnewmass;
	}
	Group(Group& newgroup)
	{
		sizeofgr = newgroup.sizeofgr;
		nameofgroup = newgroup.nameofgroup;
		massofworkers = new Worker[sizeofgr];
		for (int i = 0; i < sizeofgr; i++)
		{
			massofworkers[i] = newgroup.massofworkers[i];
		}
	}
	Group(Group&& newgroup)
	{
		sizeofgr = newgroup.sizeofgr;
		nameofgroup = newgroup.nameofgroup;
		massofworkers = new Worker[sizeofgr];
		for (int i = 0; i < sizeofgr; i++)
		{
			massofworkers[i] = newgroup.massofworkers[i];
		}
		newgroup.nameofgroup = "";
		newgroup.sizeofgr = 0;
		delete[] newgroup.massofworkers;
	}
	std::string getnameofgroup()
	{
		return nameofgroup;
	}
	void setnameofgroup(std::string newname)
	{
		nameofgroup = newname;
	}

};

