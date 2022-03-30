package readValues;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import entities.Interviewe;

public class ReadInterviewe {
    public static ArrayList<Interviewe> generateInterviwers(){
        Scanner sc = new Scanner(System.in);
        List<Interviewe> interviewes = new ArrayList<>();                  
            int noOfRooms = sc.nextInt();
            for(int i = 1; i <= noOfRooms; i++){
                interviewes.add(new Interviewe("I"+i));
            }
        return new ArrayList<>(interviewes);
    }
}
