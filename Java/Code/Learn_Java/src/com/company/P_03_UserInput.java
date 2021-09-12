package com.company;
import java.util.Scanner;

public class P_03_UserInput {
    public static void main(String[] args) {
        System.out.println("Let's take the user input");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1");
        int a = sc.nextInt();
        System.out.println("Enter number 2");
        int b = sc.nextInt();
        System.out.println("Enter a number for checking integer");
        boolean b1 = sc.hasNextInt();
        System.out.println("Yes");
        int sum = a+b;
        System.out.println("The sum of these numbers is "+sum);
        String str = sc.next(); // to read a word
        String str2 = sc.nextLine(); // to read a line
        System.out.println("The input entered is "+str);
    }
}
