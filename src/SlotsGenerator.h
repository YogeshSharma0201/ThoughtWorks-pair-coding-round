#ifndef __SlotsGenerator_H__
#define __SlotsGenerator_H__

#include <bits/stdc++.h>
using namespace std;

#include "Attendee.h"
#include "Interviewer.h"
#include "Interview.h"
#include "Slot.h"

class SlotsGenerator {
public:
	static vector<Slot*> generateSlots(int dayStart, int dayEnd, int intervalTime, int lunchStartTime, int lunchEndTime) {
		int time = dayStart;
		vector<Slot*> slots;
		while(time != dayEnd) {
			int startTime = time;
			int endTime = time + intervalTime;

			if(endTime >=  lunchStartTime && endTime <= lunchEndTime) {
				time = lunchEndTime;
				continue;
			}

			if(endTime >=  dayEnd) {
				break;
			}

			slots.push_back(new Slot(startTime, endTime));
			time = endTime;
		}
		return slots;
	}

	static vector<Interview*> allocateSlots(
			vector<Slot*> slots,
			vector<Attendee*> attendees,
			vector<Interviewer*> interviewers,
			vector<Room*> rooms
			) {

		vector<Interview*> interviews;
		int attendeeIdx = 0;
		for(int i=0; i<slots.size(); i++) {
			int interviewerIdx = 0;

			for(int j=0;
				j<rooms.size() && interviewerIdx<interviewers.size() && attendeeIdx < attendees.size();
				j++
			) {
//				rooms[j]->interviewers.push_back(interviewers[interviewerIdx++]);
//				rooms[j]->attendees.push_back(attendees[attendeeIdx++]);
				interviews.push_back(new Interview(
						slots[i],
						attendees[attendeeIdx++],
						interviewers[interviewerIdx++],
						rooms[j]
						));
			}
		}

		return interviews;
	}
};

#endif
