#ifndef __ROOMS_H__
#define __ROOMS_H__

#include "Attendee.h"
#include "Interviewer.h"

#include <bits/stdc++.h>
using namespace std;

class Room {
public:
	string name;

	Room() {
		name = "";
	};
	Room(string name) {
		this->name = name;
	}

};

class RoomsReader {
public:
	static vector<Room*> generateRooms() {
		vector<Room*> rooms;
		int noOfRooms;
		cin>>noOfRooms;
		for(int i=0; i<noOfRooms; i++) {
			string tem;
			cin>>tem;
			rooms.push_back(new Room(tem));
		}
		return rooms;
	}
};


#endif
