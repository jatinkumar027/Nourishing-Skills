package com.company;
import java.util.Scanner;

public class P_08_PracticeSetChapterTwo {
    public static void main(String[] args) {
        //3
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println(a>8);
        System.out.println(7*49/7+35/7);

        //2
        char grade = 'B';
        grade = (char)(grade + 8);
        System.out.println(grade);
        // Decrypting the grade
        grade = (char)(grade - 8);
        System.out.println(grade);

        //1
        float b = 7/4.0f * 9/2.0f;
        System.out.println(b);
    }
}
