#include<iostream>
#include"wokermaged.h"
#include"woker.h"
#include<string>
#include<string.h>

using namespace std;
int main() {

	


	//实例化管理者
	wokermanager wm;
	int choice = 0;
	while (true) {
		
		wm.showmenu();
		cin >> choice;
		switch (choice) {
		case 0:
			wm.goaway();
			break;

		case 1:
			wm.addwoker();
			wm.save();
			break;

		case 2:
			wm.showthem();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}


	}


















	system("pause");
	return 0;
}
