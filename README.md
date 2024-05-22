# Learning-Cpp

<h1>Mini C++ Projects</h1>

This is a repository for all the mini projects I have done whilst learning C++. I have included the project briefs
for each project. Each individual project is stand alone and is not a component of a bigger project.


<h2>Project: Date Difference</h2>
Write a C++ program that does the following:
a) input a number of days from -7 to 7. This value is called the difference.
b) input a date as day month year
c) display the date that is difference days from the input date

Example 1:
Enter the difference in days: 2
Enter a date in the form day month year: 14 5 2019
The final date is: 16/5/2019

Example 2:
Enter the difference in days: -3
Enter a date in the form day month year: 8 11 2020
The final date is: 5/11/2020

Example 3:
Enter the difference in days: 1
Enter a date in the form day month year: 31 12 2017
The final date is: 1/1/2018

Notes:
1. Your display should be similar to the examples above.
2. Assume that the date that is entered is a valid date (no need to check).
3. Assume that the difference that is entered is from -7 to 7 (no need to check).
4. You will need to check if the year is a leap year.
5. Remember to test your program with several different examples.


<h2>Project: Dive Competition</h2>
At a diving competition, the mark given to each diver is awarded as follows. There are a number of
judges and each judge gives a mark. The final mark is found by leaving out the highest and lowest marks
and calculating the average of the rest of the marks. Write a C++ program that reads in the number of
judges at the competition and then reads in a mark for each judge. Perform the necessary calculations,
and display the final mark to 2 decimal places.
The following data checks must be carried out in the program:
• the number of judges must be from 4 to 8 inclusive
• each judge must give a mark between 0.0 and 10.0 inclusive (a real number that may include
fractions)
If an invalid value is entered (for number of judges or for the mark), the program must ask for an
acceptable value to be entered instead.

Example 1:
Enter number of judges: 2
Invalid. Enter number of judges again (4 to 8): 4
Enter mark for Judge 1: 3.5
Enter mark for Judge 2: 6.0
Enter mark for Judge 3: 6.0
Enter mark for Judge 4: 9.75
Final mark: 6.00

Example 2:
Enter number of judges: 5
Enter mark for Judge 1: 10.0
Enter mark for Judge 2: 13.75
Invalid. Enter mark again (0.0 to 10.0): 9.0
Enter mark for Judge 3: 3.0
Enter mark for Judge 4: 9.25
Enter mark for Judge 5: 8.8
Final mark: 9.02

Notes:
1. Your display should be similar to the examples above.
2. Remember to test your program with several different examples.
3. Remember to test what happens if invalid data is entered.


<h2>Project: Voltage problems</h2>
Voltage readings are obtained from an electrical substation once every hour for six hours (so there are six
readings). Write a program to perform the following checks on the substation:
i) display all voltages that differ from the average by more than 10% of the average.
ii) display all pairs of consecutive hours where the change from the voltage at one hour
to the next is greater than 15% of the average.

Example 1
Enter 6 voltages: 210.1 223.2 189.6 206.2 235.1 215.0
The average is 213.2 volts.
10% = 21.3 volts.
15% = 32 volts. [optional – you could display this as 32.0 volts if you prefer]
The following problems occurred:
1. Voltage at hour 3 was 189.6 volts (difference of 23.6 volts).
2. Voltage at hour 5 was 235.1 volts (difference of 21.9 volts).
3. Voltage change from hour 2 to hour 3 was 33.6 volts.
4. 
Example 2
Enter 6 voltages: 233.1 201.0 221.5 240.2 222.7 208.1
The average is 221.1 volts.
10% = 22.1 volts.
15% = 33.2 volts.
No problems were encountered.

Notes:
• each problem in Example 1 has its own line number.
• display numbers with no decimal places or 1 decimal place (but not more than 1).
• any problems of the first type are reported before any problems of the second type.
• the output in Example 2 must be used if no problems occurred.
• make sure that the problem heading is displayed even if there are only problems of the second type.
• voltage differences must be displayed as positive values – do not display any negative values.
• section 6 of the notes (functions) is optional for this assignment – you do not have to make use of
functions but you can include functions if you would like to do so.

<h2>Project: Justification</h2>
In magazines the print is often justified (spread out) to fit into columns. Write a program that reads in and
justifies a line of text to fit a column width of 40. Justification is achieved by:
• finding the gaps between words
• increasing the gaps to have more spaces
• some gaps may require one more space than some of the other gaps

When your program is running, the display should look like this:

Enter a line of text: Hello there! How are you today?

1234567890123456789012345678901234567890
Hello there! How are you today?

Note that the “justification ruler” is displayed on the screen. This is the line that looks like this:
1234567890123456789012345678901234567890
The only purpose of the justification ruler is to check that your program is working. The ruler is exactly
40 characters in length and makes it easy to check that the text has been correctly justified.

In this example, the number of spaces in each of the gaps is 3, 3, 3, 3, 2. It was calculated that each gap
would need 2 spaces and there are 4 extra spaces. One extra space is added to each gap until the extra
spaces run out.

The program must create an output string of text with the required number of spaces in the text. The
final display is a cout of this output string.

Notes:
• input will always be several words with a single space between each word
• check that the input is not greater than 40 characters – if it is, display an error message
• output must be the same as in the example – you must include the justification ruler
• create a string of the output and then display the output string
• you must include at least one function in your program – you can decide what the function does
