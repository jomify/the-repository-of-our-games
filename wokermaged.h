#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>//�������������
#include"woker.h"
#include<vector>
#include<map>
#include<fstream>
#define FILENAME "empFile.txt"
using namespace std;//ʹ�������ռ�
class wokermanager {
public:
	wokermanager();

	
	bool m_filleisrmpty;
	void showmenu();//չʾ�˵�
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

