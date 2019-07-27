#include "UserList.h"



UserList::UserList(void)
{
	for (int i = 0;i<20;i++)
	{
		userList[i] = nullptr;
	}
}

UserList::~UserList(void)
{
}
bool UserList::addUser(User* user)
{
	for (int i = 0;i<20;i++)
	{
		if (userList[i] == nullptr)
		{
			userList[i] = user;
			return true;
		}
	}
	return false;
}

void UserList::saveData()
{
	ofstream ofs;
	ofs.open("player.bin", ios::binary);
	for (int i = 0;i<20;i++)
	{
		if (userList[i] == nullptr)
		{
			break;
		}
		ofs.write((char*)userList[i], sizeof(User));
	}
	ofs.close();
}

void UserList::loadData()
{
}


