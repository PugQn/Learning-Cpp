#include <iostream>
#include <string>
using namespace std;

string textCorrect(string input);     //Removes erroneous spaces from input text

int main() {
    string input;           //Text from user
    int i, j;               //Index counter
    string correctedInput;  //Text without erroneous spaces
    int gaps = 0;           //Count of gaps between words
    int spacesBetweenWords; //Number of spaces between each word
    int spacesRemainder;    //Remaining spaces to distribute
    string output = "";     //Justified text to print

    //Prompt user for input
    cout << "\nEnter a line of text: ";
    getline(cin, input);

    //Remove erroneous spaces from input text
    correctedInput = textCorrect(input);

    //Check length of text is <= 40 characters
    while ((correctedInput.length() > 40) && (input != "**")) {
        //Show error message and input prompt
        cout << "\nYour line of text is too long. It must be 40 characters or less (** to quit).";
        cout << "\nEnter a line of text: ";
        getline(cin, input);

        //Remove erroneous spaces from input text
        correctedInput = textCorrect(input);
    }

    //Exit message
    if (input == "**") {
        cout << "\nGoodbye. Have a nice day.";
    }

    //Count how many gaps between words are in the text
    for (i = 0; i < correctedInput.length(); i++) {
        if (correctedInput[i] == ' ') {
            gaps ++;
        }
    }

    //Find number of spaces to insert between each word
    spacesBetweenWords = (40 - correctedInput.length()) / gaps;

    //Find remaining number of spaces to distribute
    spacesRemainder = (40 - correctedInput.length()) % gaps;

    //Compile output text with justified spacing
    for (i = 0; i < correctedInput.length(); i++) {
        if (correctedInput[i] != ' ') {
            output = output + correctedInput[i];
        }
        else {
            for (j = 0; j <= spacesBetweenWords; j++) {
                output = output + " ";
            }
            if (spacesRemainder > 0) {
                output = output + " ";
                spacesRemainder --;
            }
        }
    }
    
    //Print justification ruler and justified text
    cout << "\n1234567890123456789012345678901234567890" << endl;
    cout << output << endl;

}

string textCorrect(string input) {

    int i, j, k;            //Index counter
    string temp = "";       //Text holder
    string output = "";     //Corrected text

    //Find where spaces at the begining of text stop
    for (i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            break;
        }
    }

    //Find where spaces at the end of text stop
    for (j = input.length() - 1; j > 0; j --) {
        if (input[j] != ' ') {
            break;
        }
    }
    
    //Compile text into temp without starting/ending spaces
    for (k = i; k <= j; k++) {
        temp = temp + input[k];
    }
    
    //Remove any erroneous spaces between words
    //Loop through each character in the input string
    for (i = 0; i < temp.length(); i++) {
        //If it is a non-space character append it to output.
        if (temp[i] != ' ') {
            output = output + temp[i];
        }
        //If the character is a space
        else {
            //If the space is before a non-space character
            if (temp[i-1] != ' ') {
                output = output + " ";
            }
        }
    }

    return output;
}

