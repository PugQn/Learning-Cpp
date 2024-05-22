/*
Name: Claire Durant
Student ID: 12030312
Campus: Manawatu
Course: 159.101 Applied Programming
Assessment: Assignment 1
Due date: 21 March 7pm

Assumptions:
Date input is valid
Difference entered is within range -7 to 7
*/



#include <iostream>
using namespace std;

int difference, day, month, year, leap_year, century_rule, century, rule_4;

int main() {
    cout << "Enter the difference in days: ";               //Prompt user for difference input
    cin >> difference;                                      //Input attributed to difference variable
    cout << "Enter a date in the form day month year: ";  //Prompt user for date input
    cin >> day >> month >> year;                            //Inputs attributed to day, month and year variables
    day = day + difference;                                 //Adjust day: Add difference to day

    //Is it a leap year?
    century_rule = year % 400;                              //Identify century rule
    century = year % 100;                                   //Identify if a century
    rule_4 = year % 4;                                      //Identify 4 rule
    
    if (century == 0){                                      //Check if it is a century year
        if (century_rule == 0) {                            //Check for century rule
            leap_year = 1;                                  //It is a leap year
        }
        else {                                              //It's a century but century rule does not apply
            leap_year = 0;                                  //It is not a leap year
        }
    }
    
    else {                                                  //For all other years, not centuries
        if (rule_4 == 0) {                                  //Check if 4 rule applies
            leap_year = 1;                                  //If it does, then it is a leap year
        }
        else {                                              //If it doesn't, then it is not a leap year
            leap_year = 0;
        }
    }


    //Adjust months with 31 days
                                                            //Identify length of input month
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
        
        //Month roll forwards
        if (day > 31) {                                     //Identify if day is > length of input month
            day -= 31;                                      //Adjust day: Subtract length of input month from day
            month += 1;                                     //Adjust month: Add 1 to month (doesn't matter which month as max difference added is 7)

            //Year roll forwards
            if (month == 13) {                              //Identify if December
                month = 1;                                  //Adjust month: January
                year += 1;                                  //Adjust year: Add year
            }
        }

        //Month roll backwards
        else if (day < 1) {                                 //Identify if month roll back


            //Special case: January. Year roll backwards
            if (month == 1) {                               //Identify if January
                day += 31;                                  //Adjust day: Add length of December
                month = 13;                                //Adjust month: Change to December + 1
                year -= 1;                                  //Adjust year: Roll back to previous year
            }

            //Special case: March. Leap years
            else if (month == 3) {                          //Identify if March
                if (leap_year == 1) {                       //If leap year
                    day += 29;                              //Adjust day: 29 days for leap year
                }
                else {                                      //If not leap year
                    day += 28;                              //Adjust days: 28 days for non leap year
                }
            }

            //Special case: August. Previous month is also 31 days
            else if (month == 8) {                          //Identify if August
                day += 31;                                  //Adjust day: Add length of July
            }

            //All other months with 31 days
            else {                                          //For all other months with 31 days
                day +=30;
            }
            
            month -= 1;                                     //Adjust month: Roll back one month
        }
    }

    //Adjust months with 30 days
                                                            //Identify length of input month
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {

        //Month roll forwards
        if (day > 30) {                                     //Identify if day is > length of input month
            day -= 30;                                      //Adjust day: Subtract length of input month from day
            month += 1;                                     //Adjust month: Add 1 to month
        }

        //Month roll backwards
        else if (day < 1) {                                 //Identify if month roll back
            day += 31;                                      //Adjust day: Add length of previous month to day
            month -= 1;                                     //Adjust month: Roll back one month
        }

    }

    //Adjust Febuary
    else if (month == 2) {                                  //Idenify if month is Febuary

        //Month roll forwards.
        if ((leap_year == 1) && (day > 29))  {               //Identify if leap year and if day is longer than leap year Feb.
            day -= 29;                                      //Adjust day: Subtract length of Feb from day
            month += 1;                                     //Adjust month: Add 1 to month
        }
        else if ((leap_year == 0) && (day > 28)) {          //Identify if NOT leap year and if day is longer than Feb.
            day -=28;                                       //Adjust day: Subtract length of Feb from day
            month += 1;                                     //Adjust month: Add 1 to month                   
        }
        
        //Month roll backwards.
        else if (day < 1) {                                 //Identify if rolling month back
            day += 31;                                      //Adjust day: add length of January
            month -= 1;                                     //Adjust month: Roll back one month
        }
    }

    cout << "The final date is: "<< day << "/" << month << "/" << year;
   
}