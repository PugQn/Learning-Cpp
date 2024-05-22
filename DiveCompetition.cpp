#include <iostream>
#include <iomanip>          
using namespace std;


int judges, i;
float lowest, highest, sum, final;
float marks[8];

int main() {

//Prompt for number of judges
    cout << "Enter number of judges: ";
    cin >> judges;

/*Validate number of judges: Loop will stop when/if number of judges is correct.
Loop will continue if number of judges is invalid. There is nothing in the 
assignment that indicates the loop needs to be stopped. If needed a trailing value
here would be useful.*/

    while ((judges < 4) || (judges > 8)) {      
        cout << "Invalid. Enter number of judges again (4 to 8): ";
        cin >> judges;
    }

/*Inititialise marks, sum, highest and lowest variables. Highest is intitialised 
to the lowest possible mark as all marks will be considered as all are higher. 
The opposite is true for lowest mark. Marks and sum are initialised as they are 
used in calculations. If they are not initialised to 0 then there is no control
over what value the program uses.*/

    highest = 0.0;
    lowest = 10.0;
    sum = 0;
    for (i = 0; i < 8; i ++) {
        marks[i] = 0;
    }

//Prompt for marks

    for (i = 0; i < judges; i++) {
        cout << "Enter mark for Judge " << i + 1 << ": ";
        cin >> marks[i];

/*Validate marks: Loop will stop when mark entered is valid. Again, a trailing
value could be used here to stop the loop but there is nothing in the assignment
which suggests the loop would need to be stopped.*/

        while ((marks[i] < 0.0) || (marks[i] > 10.0)) {
            cout << "Invalid. Enter mark again (0.0 to 10.0): ";
            cin >> marks[i];
        }

        //Add results to find total marks. Used to find final
        sum += marks[i];            

        //Store highest or lowest marks. Will be deducted from sum to find final.
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

/*Calculate final result: Remove highest and lowest marks and judges, then average
from remaining marks and judges */

    sum = sum - highest - lowest;
    final = sum / (judges - 2);

//Display final mark to 2 d.p.
    cout << "Final mark: ";
    cout << setprecision(2) << fixed << final;

}
