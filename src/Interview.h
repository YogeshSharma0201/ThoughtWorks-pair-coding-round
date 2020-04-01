#ifndef __INTERVIEW_H__
#define __INTERVIEW_H__

#include <bits/stdc++.h>
using namespace std;

#include "Attendee.h"
#include "Interviewer.h"
#include "Slot.h"

class Interview {
public:
	Slot* slot;
	Attendee* attendee;
	Interviewer* interviewer;
	Room* room;

	Interview(Slot* slot, Attendee* attendee, Interviewer* interviewer, Room* room) {
		this->slot = slot;
		this->attendee = attendee;
		this->interviewer = interviewer;
		this->room = room;
	}

	void printInterviewInfo() {
		cout<<attendee->id<<"\t\t"<<interviewer->id<<"\t\t"<<room->name;
		cout<<"\t"<<Slot::convertTime(slot->startTime)<<" - "<<Slot::convertTime(slot->endTime)<<endl;
	}
};

#endif
