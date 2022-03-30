import java.util.ArrayList;

import dto.interview;
import entities.*;
import entities.Slot;
import readValues.*;

public class App {
    public static void main(String[] args) throws Exception {
	    
        ArrayList<Attendee> attendees = ReadAttendee.generateAttendees();
        ArrayList<Interviewe> interviewers = ReadInterviewe.generateInterviwers();
        ArrayList<Room> rooms = ReadRoom.generateRooms();
        ArrayList<Slot> slots = GenerateSlots.generate();

        System.out.println(attendees.toString());


        ArrayList<interview> interviews = GenerateSlots.allocateSlots(slots, attendees, interviewers, rooms);

        System.out.println("Attendee\tInterviewer\tRoom\tTime");

        for(interview interview: interviews) {
            System.out.println(interview.toString());
        }
    }
}
