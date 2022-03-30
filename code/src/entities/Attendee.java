package entities;

public class Attendee extends Person{
    public Attendee(){
        super();
    }

    public Attendee(String id){
        super(id);
    }

    @Override
    public String toString(){
        return this.getId();
    }
}
