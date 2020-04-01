#ifndef __ATTENDEES_H__
#define __ATTENDEES_H__

#include <bits/stdc++.h>
using namespace std;

#include "Person.h"

class Attendee: public Person {
public:
	Attendee(): Person() {};

	Attendee(string id): Person(id) {}
};

class AttendeesReader {
public:
	static vector<Attendee*> generateAttendees() {
		vector<Attendee*> attendees;
		int noOfAttendees;
		cin>>noOfAttendees;
		for(int i=0; i<noOfAttendees; i++) {
			string attendeeId;
			cin>>attendeeId;
			attendees.push_back(new Attendee(attendeeId));
		}
		return attendees;
	}
};

#endif
