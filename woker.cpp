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
	cout << "ְ�����" << this->W_ID;
	cout << "\tְ������" << this->W_Name;
	cout<< "\t��λ" << this->getjobname(this->m_Dept_Id);
	cout<< "\t��λ����" << "�������" << endl;
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
	cout << "ְ�����" << this->W_ID;
	cout << "\tְ������" << this->W_Name;
	cout << "\t��λ" << this->getjobname(this->m_Dept_Id);
	cout << "\t��λ����" << "��������" << endl;

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
	cout << "ְ�����" << this->W_ID;
	cout << "\tְ������" << this->W_Name;
	cout << "\t��λ" << this->getjobname(this->m_Dept_Id);
	cout << "\t��λ����" << "�Է�" << endl;
}
string boss::getjobname(int did) {
	char list[3][9] = { "utopia","glode","icarus" };
	return list[did];
}



