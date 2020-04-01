#ifndef __PERSON_H__
#define __PERSON_H__

#include <bits/stdc++.h>
using namespace std;

class Person {
public:
	string id;

	Person() {
		id = "";
	};
	Person(string id) {
		this->id = id;
	}

	void readName() {
		cin>>id;
	}
	string getName() {
		return id;
	}
};

#endif
