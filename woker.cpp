#include<iostream>
#include<string>
#include"woker.h"
#include<string>
employee::employee(int id, string name, int did) {
	this->W_ID = id;
	this->W_Name = name;
	this->m_Dept_Id = did;
}

void employee::showinfo() {
	cout << "职工编号" << this->W_ID;
	cout << "\t职工姓名" << this->W_Name;
	cout<< "\t岗位" << this->getjobname(this->m_Dept_Id);
	cout<< "\t岗位责任" << "完成责任" << endl;
}
string employee::getjobname(int did) {
	char list[3][9] = {"utopia","glode","icarus"};
	return list[did];
}
master::master(int id, string name, int did){
	this->W_ID = id;
	this->W_Name = name;
	this->m_Dept_Id = did;
}

void master::showinfo() {
	cout << "职工编号" << this->W_ID;
	cout << "\t职工姓名" << this->W_Name;
	cout << "\t岗位" << this->getjobname(this->m_Dept_Id);
	cout << "\t岗位责任" << "布置任务" << endl;

}
string master::getjobname(int did) {
	char list[3][9] = { "utopia","glode","icarus"};
	return list[did];
}
boss::boss(int id, string name, int did){
	this->W_ID = id;
	this->W_Name = name;
	this->m_Dept_Id = did;
}
void boss::showinfo() {
	cout << "职工编号" << this->W_ID;
	cout << "\t职工姓名" << this->W_Name;
	cout << "\t岗位" << this->getjobname(this->m_Dept_Id);
	cout << "\t岗位责任" << "吃饭" << endl;
}
string boss::getjobname(int did) {
	char list[3][9] = { "utopia","glode","icarus" };
	return list[did];
}



