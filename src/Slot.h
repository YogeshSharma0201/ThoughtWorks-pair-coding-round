#ifndef __SLOTS_H__
#define __SLOTS_H__

#include <bits/stdc++.h>
using namespace std;

class Slot {
public:
	int startTime, endTime;
	vector<Room*> rooms;

	Slot() {
		startTime = endTime = -1;
	};
	Slot(int startTime, int endTime) {
		this->startTime = startTime;
		this->endTime = endTime;
	}

	pair<int, int> getTime() {
		return make_pair(startTime, endTime);
	}

	string printTime() {
		return convertTime(startTime)+" "+convertTime(endTime);
	}

	static int convertTime(int time) {
		if(time>12) return time-12;
	}

};

#endif
