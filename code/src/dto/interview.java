package dto;

import entities.Attendee;
import entities.Interviewe;
import entities.Room;
import entities.Slot;

public class interview {
	private Slot slot;
	private Attendee attendee;
	private Interviewe interviewer;
	private Room room;

	public interview(Slot slot, Attendee attendee, Interviewe interviewer, Room room) {
		this.slot = slot;
		this.attendee = attendee;
		this.interviewer = interviewer;
		this.room = room;
	}

    @Override
	public String toString(){
		return this.attendee + "\t\t"+ this.interviewer + "\t\t"+ this.room + "\t" + slot.toString();
	}
}
