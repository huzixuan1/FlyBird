#pragma once
#include"stdafx.h"
#include "User.h"

using namespace std;
class UserList
{
public:
	UserList(void);
	~UserList(void);
public:
	User* userList[20];//�洢��ҵ�����
	bool addUser(User* user);
	void saveData();
	void loadData();
};


