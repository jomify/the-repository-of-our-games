#pragma once//防止头文件重复包含
#include<iostream>//包含输入输出流
#include"woker.h"
#include<vector>
#include<map>
#include<fstream>
#define FILENAME "empFile.txt"
using namespace std;//使用命名空间
class wokermanager {
public:
	wokermanager();

	
	bool m_filleisrmpty;
	void showmenu();//展示菜单
	void goaway();
	map<int,woker*>em_mp;
	int number_em;
	woker** m_Emparray;
	vector<woker*> list;
	void addwoker();
	void showthem();
	void save();
	~wokermanager();


};

