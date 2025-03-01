#include"wokermaged.h"
#include"woker.h"
wokermanager::wokermanager() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		this->number_em = 0;
		this->m_filleisrmpty = true;
		this->m_Emparray = NULL;
		ifs.close();
		return;
	}
	if (ifs.eof()) {
		cout << "文件为空" << endl;
		this->number_em = 0;
		this->m_filleisrmpty = true;
		this->m_Emparray = NULL;
		ifs.close();
		return;
	}






}




void wokermanager::showmenu() {
	cout << "*******************************************" << endl;
	cout << "****************理想国总辖书***************" << endl;
	cout << "***************0,退出管理程序**************" << endl;
	cout << "***************1,增加职工程序**************" << endl;
	cout << "***************2,显示职工信息**************" << endl;
	cout << "***************3.删除离职员工**************" << endl;
	cout << "***************4,修改员工信息**************" << endl;
	cout << "***************5,查找职工信息**************" << endl;
	cout << "***************6,按照编号排序**************" << endl;
	cout << "***************7,清空所以文档**************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}


void wokermanager::goaway() {
	cout << " thank you for your using this program" << endl;
	system("pause");
	exit(0);
}
void wokermanager::addwoker() {
	cout << "请输入员工的信息" << endl;
	int id;
	string name;
	int did;
	cout << "id" << endl;
	cin >> id;
	cout << "name" << endl;
	cin >> name;
	cout << "did" << endl;
	cin >> did;
	woker* nemp = nullptr;
	woker* nmster = nullptr;
	woker* nboss = nullptr;
	switch (did) {
	case 1:
		nemp = new employee(id, name, did);
		list.push_back(nemp);
		number_em++;
		em_mp[id] = nemp;

		break;

	case 2:
		nmster = new master(id, name, did);
		list.push_back(nmster);
		number_em++;
		em_mp[id] = nmster;
		break;

	case 3:
		nboss = new boss(id, name, did);
		list.push_back(nboss);
		number_em++;
		em_mp[id] = nboss;
		break;
	default:
		break;
	}
}
ostream& operator<<(ostream& out, woker& wk) {
	out << wk.W_ID << endl;
	out << wk.W_Name << endl;
	return out;
}


void wokermanager::save() {

	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->number_em; i++) {
		ofs << this->list[i]->W_ID << "\t"
			<< this->list[i]->W_Name << "\t"
			<< this->list[i]->m_Dept_Id << endl;

	}
	this->m_filleisrmpty = false;

	ofs.close();


}

void tset() {
	cout << "测试成功" << endl;
}






















void wokermanager::showthem() {
	cout << "输入要展示的人的编号" << endl;
	int number;
	cin >> number;
	list[number]->showinfo();
}





















wokermanager::~wokermanager() {
	// 手动释放 vector 中的内存
	for (woker* w : list) {
		delete w;
	}
	list.clear();  // 清空 vector，虽然这里是多余的
}

