package entities;


public class Slot {
    private int startTime;
    private int endTime;

    public Slot(int startTime, int endTime){
        this.startTime = startTime;
        this.endTime = endTime;
    }

    public Slot getSlot(){
        return new Slot(this.startTime, this.endTime);
    }

    public int Convert(int time){
        if(time > 12){
            return time-12;
        }
        return time;
    }

    @Override
    public String toString(){
        return Convert(this.startTime) + "-" + Convert(this.endTime);
    }

}
