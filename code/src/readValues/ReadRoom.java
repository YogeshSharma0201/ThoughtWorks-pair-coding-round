package readValues;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import entities.Room;

public class ReadRoom {
    public static ArrayList<Room> generateRooms(){
        Scanner sc = new Scanner(System.in);
        List<Room> rooms = new ArrayList<>();                  
            int noOfRooms = sc.nextInt();
            for(int i = 1; i <= noOfRooms; i++){
                rooms.add(new Room("R"+i));
            }
        
        return new ArrayList<>(rooms);
    }    
}
