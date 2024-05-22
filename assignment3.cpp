/*
Name: Claire Durant
Student ID: 12030312
Campus: Manawatu
Course: 159.101 Applied Programming
Assessment: Assignment 3
Due date: 9 May 7pm
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void print();

float voltage[6];

int main() {
    int i, problemCount;
    float sum, average;
    sum = 0;                            //Must be initilised as is used in calculation.

// Section 1: Input values into voltage array
    cout << "Enter 6 voltages: ";
    for (i = 0; i < 6; i++) {
        cin >> voltage[i];              //
        sum += voltage[i];              //For calculating average
    }

// Section 2: Find and print threshold values
    //Find & print average
    average = sum/6.0;
    cout << "The average is ";
    cout << setprecision(1) << fixed << average << " volts.\n";

    //Find & print 10% of average
    cout << "10% = ";
    cout << setprecision(1) << fixed << average*0.1 << " volts.\n";

    //Find & print 15% of average
    cout << "15% = ";
    cout << setprecision(1) << fixed << average*0.15 << " volts.\n\n";

// Section 3: Problems
    //Find and print 10% problems
    problemCount = 0;
    for (i = 0; i < 6; i++) {
        if ((voltage[i] > average*1.1) || (voltage[i] < average*0.9)) {
            problemCount ++;

            //Set problem heading for first problem
            if (problemCount == 1) {
                cout << "The following problems occured: \n";
            }

            //Print problem statement
            cout << problemCount << ". Voltage at hour " << i+1 << " was ";
            cout << setprecision(1) << fixed << voltage[i] << " (difference of ";
            cout << setprecision(1) << fixed << abs(average - voltage[i]) << " volts).\n";
        }
    }

    //Find and print 15% problems
    for (i = 0; i < 5; i++) {
        if (abs(voltage[i]-voltage[i+1]) > average*0.15) {
            problemCount ++;
            cout << problemCount << ". Voltage change from hour " << i+1;
            cout << " to hour " << i+2 << " was ";
            cout << setprecision(1) << fixed << abs(voltage[i]-voltage[i+1]) << " volts.\n";
        }
    }

    //Print statement for no problems
    if (problemCount == 0) {
        cout << "No problems were encountered.\n";
    }
   
}