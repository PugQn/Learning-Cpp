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
