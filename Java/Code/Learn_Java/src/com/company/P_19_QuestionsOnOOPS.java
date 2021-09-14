package com.company;

class Employee_new{
    int salary;
    String name;

    public int getSalary(){
        return salary;
    }
    public String getName(){
        return name;
    }
    public void setName(String myname){
        name = myname;
    }
}

class Cellphone{
    public void ringing(){
        System.out.println("Ringing");
    }
    public void vibrating() {
        System.out.println("Vibrating");
    }
}

public class P_19_QuestionsOnOOPS {
    public static void main(String[] args) {
        Employee_new e1 = new Employee_new();
        e1.setName("Jatin");
        e1.salary = 14700;
        System.out.println(e1.getName());
        System.out.println(e1.getSalary());

        Cellphone cell1 = new Cellphone();
        cell1.ringing();
        cell1.vibrating();
    }
}
