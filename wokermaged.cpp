#include"wokermaged.h"
#include"woker.h"
wokermanager::wokermanager() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		this->number_em = 0;
		this->m_filleisrmpty = true;
		this->m_Emparray = NULL;
		ifs.close();
		return;
	}
	if (ifs.eof()) {
		cout << "�ļ�Ϊ��" << endl;
		this->number_em = 0;
		this->m_filleisrmpty = true;
		this->m_Emparray = NULL;
		ifs.close();
		return;
	}






}




void wokermanager::showmenu() {
	cout << "*******************************************" << endl;
	cout << "****************�������Ͻ��***************" << endl;
	cout << "***************0,�˳��������**************" << endl;
	cout << "***************1,����ְ������**************" << endl;
	cout << "***************2,��ʾְ����Ϣ**************" << endl;
	cout << "***************3.ɾ����ְԱ��**************" << endl;
	cout << "***************4,�޸�Ա����Ϣ**************" << endl;
	cout << "***************5,����ְ����Ϣ**************" << endl;
	cout << "***************6,���ձ������**************" << endl;
	cout << "***************7,��������ĵ�**************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}


void wokermanager::goaway() {
	cout << " thank you for your using this program" << endl;
	system("pause");
	exit(0);
}
void wokermanager::addwoker() {
	cout << "������Ա������Ϣ" << endl;
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
	cout << "���Գɹ�" << endl;
}






















void wokermanager::showthem() {
	cout << "����Ҫչʾ���˵ı��" << endl;
	int number;
	cin >> number;
	list[number]->showinfo();
}





















wokermanager::~wokermanager() {
	// �ֶ��ͷ� vector �е��ڴ�
	for (woker* w : list) {
		delete w;
	}
	list.clear();  // ��� vector����Ȼ�����Ƕ����
}

