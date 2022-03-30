package readValues;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import entities.Attendee;

public class ReadAttendee {
    public static ArrayList<Attendee> generateAttendees(){
        Scanner sc = new Scanner(System.in);
        List<Attendee> attendees = new ArrayList<>();                  
            int noOfRooms = sc.nextInt();
            for(int i = 1; i <= noOfRooms; i++){
                attendees.add(new Attendee("A"+i));
            }
       
        return new ArrayList<>(attendees);
    }
}
