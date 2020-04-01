//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

#include "Room.h"
#include "Slot.h"
#include "Attendee.h"
#include "Interviewer.h"
#include "Interview.h"
#include "SlotsGenerator.h"

const int dayStartTime = 9, dayEndTime = 18;
const int interviewInterval = 2;
const int lunchStartTime = 14, lunchEndTime = 15;

int main() {
	Slot* slot = new Slot();
	vector<Slot*> slots = SlotsGenerator::generateSlots(
			dayStartTime,
			dayEndTime,
			interviewInterval,
			lunchStartTime,
			lunchEndTime
			);

	vector<Attendee*> attendees = AttendeesReader::generateAttendees();
	vector<Interviewer*> interviewers = InterviewersReader::generateInterviewers();
	vector<Room*> rooms = RoomsReader::generateRooms();

	vector<Interview*> interviews = SlotsGenerator::allocateSlots(slots, attendees, interviewers, rooms);

	cout<<"Attendee\tInterviewer\tRoom\tTime"<<endl;

	for(int interviewIdx = 0; interviewIdx < interviews.size(); interviewIdx++) {
		interviews[interviewIdx]->printInterviewInfo();
	}

	return 0;
}
