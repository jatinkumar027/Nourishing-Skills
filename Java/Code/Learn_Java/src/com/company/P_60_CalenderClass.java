package com.company;

import java.util.*;
public class P_60_CalenderClass extends Thread{
    public static void main(String[] args) {
        Calendar c = Calendar.getInstance();
        System.out.println(c.getCalendarType());  //getCalendarType() returns the type of the calendar
        System.out.println("Current year is :"+ c.get(Calendar.YEAR));
        System.out.println("Current month is :"+ c.get(Calendar.MONTH)); //The indexing for month field ranges from [0,11]
        System.out.println("Current day is :"+ c.get(Calendar.DAY_OF_WEEK));
        System.out.println("Current hour is :"+ c.get(Calendar.HOUR_OF_DAY));
        System.out.println("Current minute is :"+ c.get(Calendar.MINUTE));
        System.out.println("Current second is :"+ c.get(Calendar.SECOND));

        System.out.println("Current date is : " + c.getTime());
        c.add(Calendar.YEAR, 4);
        System.out.println("After 4 years  : "+ c.getTime());
        c.add(Calendar.YEAR, -12);
        System.out.println("Before 12 years  : "+ c.getTime());
        c.add(Calendar.MONTH,2);
        System.out.println("After 2 months  : "+ c.getTime());

        System.out.println(c.getWeeksInWeekYear());

        System.out.println(" The maximum no. of weeks in a year : " + c.getMaximum(Calendar.WEEK_OF_YEAR));
    }
}
