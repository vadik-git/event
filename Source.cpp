#include <iostream>
#include"Header.h"
/*#include < stdio.h >
#include <Windows.h>
#include <cstdlib>
#include <string>
#include<ctime>
#include<dos.h>
#include <math.h>
#include<list>
#define CLEAR system("cls");
using namespace std;



HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
struct event {
	string zagolovok;
	string opys;
	string day;
	float clock;
	int levelvazn;


};

list <event> listevent;

void addevent(  ) {
	int quanitu = 0;
	event a;
	cout << "enter quanitu event" << endl;
	cin >> quanitu;
	for (int i = 0; i < quanitu; i++) {
		cout << "enter zagolovok" << endl;
		cin >> a.zagolovok;
		
		cout << "enter opys" << endl;
		cin.ignore();
		
		getline(cin, a.opys);
		cout << "enter day event" << endl;
		cin >> a.day;
		
		cout << "enter clock event" << endl;
		cin >> a.clock;
		
		cout << "enter level vaznosti" << endl;
		cin >> a.levelvazn;
		
		listevent.push_back(a);
	}




}

void levelvazn() {
	event a;
	
	if (a.levelvazn == 1) {
		
		cout << "podiya ne vazna" << endl;

	}
	if (a.levelvazn == 2) {

		cout << "podiya ne duze vazna " << endl;

	}
	if (a.levelvazn == 3) {

		cout << "podiya duze vazna" << endl;
	}

}

void watchevent() {

	for (event a : listevent) {

		cout << " zagolovok -: " << a.zagolovok << endl;
		cout << " opys -: " << a.opys << endl;
		cout << " day -: " << a.day << endl;
		cout << " clock -: " << a.clock << endl;
		
		cout << " level vaznosti -: " << a.levelvazn << endl;
		if (a.levelvazn == 1) {
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
			cout << "podiya ne vazna" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 1) | 7));
		}
		if (a.levelvazn == 2) {

			cout << "podiya ne duze vazna " << endl;

		}
		if (a.levelvazn == 3) {
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 0) | 4));
			cout << "podiya duze vazna" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 1) | 7));
		}
	}
	

}*/

int main() {


	int a;
	do {
		cout << "1.add event" << endl;
		cout << "2.watch event" << endl;
		cout << "3.exit" << endl;
		cin >> a;
		switch (a) {
		case 1:
			addevent();
			break;
		case 2:
			watchevent();
			break;
		case 3:
			return 0;
			break;



		}
	} while (a != 3);

	





	system("pause");
	return 0;
}




















