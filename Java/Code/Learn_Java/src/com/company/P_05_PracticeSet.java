package com.company;
import java.util.Scanner;
// Deteting the number is integer is not
public class P_05_PracticeSet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        boolean b1 = sc.hasNextInt();
        if(b1){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
