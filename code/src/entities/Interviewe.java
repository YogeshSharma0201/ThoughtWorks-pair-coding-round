package entities;

public class Interviewe extends Person{
    public Interviewe(){
        super();
    }

    public Interviewe(String id){
        super(id);
    }

    @Override
    public String toString(){
        return this.getId();
    }
}
