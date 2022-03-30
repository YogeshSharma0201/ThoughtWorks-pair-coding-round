package entities;

public class Room {
    String roomName;
    public Room(){
        roomName = "";
    }
    public Room(String roomName){
        this.roomName = roomName;
    }

    @Override
    public String toString(){
        return this.roomName;
    }
}

