#pragma once
#include<string>
using namespace std; 
struct event {
	string zagolovok;
	string opys;
	string day;
	float clock;
	int levelvazn;


};



void addevent();
void levelvazn();
void watchevent();
