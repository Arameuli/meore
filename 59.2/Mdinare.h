#pragma once
#include<string>
#include<algorithm>
using namespace std;
class Mdinare
{
public:
	string name, location;
	int length;
	Mdinare(){

	}
	friend istream & operator >>(istream & in, Mdinare & f);
	friend ostream & operator <<(ostream & out, Mdinare & f);
};

