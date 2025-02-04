// preprocessor
#include <iostream>
#include <fstream>

int main() {



std::ifstream readFile;      // define input file stream object
readFile.open("/Users/ericlanghorne/Documents/days.txt");        // open .txt file

/* Used below statement for debugging to figure out why code was compiling but not executing properly

if (!readFile) {        // check if file is open
    std::cerr << "Error: File not opened\n";        // print error message
    return 1;
}
*/


std::string daysOfTheWeek;      // define string variable
readFile >> daysOfTheWeek;        // days.txt contents into weatherFile variable

std::cout << "File first word:\n" << daysOfTheWeek;       // test variable contents (should be first word of days.txt "Sunday")

readFile.close();       // close file
return 0;


}