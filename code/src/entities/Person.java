package entities;

public class Person {
    private String id;

    public Person(){
        id = "";
    }

    public Person(String id){
        this.id = id;
    }

    public String getId(){
        return this.id;
    } 
}
