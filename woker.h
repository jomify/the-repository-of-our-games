#pragma once
#include<iostream>
#include<string>
using namespace std;

//ְ��������
class woker {
public:
	virtual void showinfo() = 0;
	virtual string getjobname(int a) = 0;
	int W_ID;
	string W_Name;
	int m_Dept_Id;

};

class employee :public woker {
public:
 employee(int id,string name,int did);
 virtual string getjobname(int did);
    virtual void showinfo();
    
}; 
class master :public woker {
public:
	master(int id, string name, int did);
	virtual string getjobname(int did);
	virtual void showinfo();
	
};
class boss :public woker{
public:
	boss(int id, string name, int did);
	virtual string getjobname(int did);
	virtual void showinfo();
};