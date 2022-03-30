package readValues;

import java.util.ArrayList;
import java.util.List;

import entities.Attendee;
import entities.Interviewe;
import entities.Room;
import entities.Slot;
import GlobalConstants.Constants;
import dto.interview;

public class GenerateSlots {
    public static ArrayList<Slot> generate(){
        int time = Constants.DAY_START_TIME;
        List<Slot> slots = new ArrayList<>();

        while(time >= Constants.DAY_START_TIME && time <= Constants.DAY_END_TIME){
            int startTime = time;
            int endTime = time + Constants.INTERVIEW_INTERVAL;

            if(endTime >=  Constants.LUNCH_START_TIME && endTime <= Constants.LUNCH_START_TIME) {
				time = Constants.LUNCH_START_TIME;
				continue;
			}

			if(endTime >=  Constants.DAY_END_TIME) {
				break;
			}

			slots.add(new Slot(startTime, endTime));
			time = endTime;
        }

        return new ArrayList<>(slots);
    }

    public static ArrayList<interview> allocateSlots(
			ArrayList<Slot> slots,
			ArrayList<Attendee> attendees,
			ArrayList<Interviewe> interviewers,
			ArrayList<Room> rooms
			) {

		ArrayList<interview> interviews = new ArrayList<>();
		int attendeeIdx = 0;
		for(int i=0; i<slots.size(); i++) {
			int interviewerIdx = 0;

			for(int j=0;
				j<rooms.size() && interviewerIdx<interviewers.size() && attendeeIdx < attendees.size();
				j++
			) {
				interviews.add(new interview(
						slots.get(i),
						attendees.get(attendeeIdx++),
						interviewers.get(interviewerIdx++),
						rooms.get(j)
						));
			}
		}

		return interviews;
	}

}
