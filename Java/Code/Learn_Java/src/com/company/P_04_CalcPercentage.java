package com.company;
import java.util.Scanner;
public class P_04_CalcPercentage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Subject 1");
        float sub1 = sc.nextFloat();
        System.out.println("Enter Subject 2");
        float sub2 = sc.nextFloat();
        System.out.println("Enter Subject 3");
        float sub3 = sc.nextFloat();
        System.out.println("Enter Subject 4");
        float sub4 = sc.nextFloat();
        System.out.println("Enter Subject 5");
        float sub5 = sc.nextFloat();
        System.out.println("Enter Maximum marks of all subjects");
        float max = sc.nextFloat();
        float total = sub1 + sub2 + sub3 + sub4 + sub5;
        float perc = (total/max)*100;
        System.out.println("Your percentage is "+perc+"%");
    }
}
