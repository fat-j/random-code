// https://stackoverflow.com/questions/51977400/how-do-i-check-if-a-string-format-is-valid-while-reading-from-a-text-file-in-c


#include <fstream>
#include <string>
#include <regex>
#include <iostream>

using namespace std;

int main()
{
    // Let's start with variable declaration and initialization

    // First you have to open the text file,
    // for which you need `ifstream`.
    // It is responsible for decoding text files.
    ifstream ifs("test.txt");

    // Provide a temporary storage for each line
    string line;

    // Regular expression pattern object
    // This is what you need
    // in order to validate each line
    // and extract data from each line,
    regex p("(\\w+),(\\w+),([A-Z]{2}[0-9]{3}[A-Z]{2})");

    // Match object
    smatch m;

    // Check if the file stream is opened
    // otherwise you might have some problems
    // to continue the following steps
    if (ifs.is_open())
    {
        // Then you need to traverse over each line in the file.
        for (int lineNum = 1;
                getline(ifs, line);
                lineNum++)
        {
            // Validate the line
            if (regex_search(line, m, p) && m.size() > 3)
            {
                cout << "Pattern matched." << endl;
                cout << endl;

                string vehicle = m.str(1);
                string color = m.str(2);
                string plate = m.str(3);

                cout << "Vehicle:\t"    << vehicle << endl;
                cout << "Color  :\t"    << color << endl;
                cout << "Plate  :\t"    << plate << endl;

                // You can insert some codes here to handle the results

                cout << endl;
            }
            else
            {
                cerr << "There's an invalid entry in line number - " << lineNum << "!" << endl;
            }
        }

        // Always remember to close a stream
        // before exiting the program
        // otherwise you may suffer from **memory leakage**
        ifs.close();
    }
    else
    {
        cerr << "Fail to open input file!" << endl;
    }

    return 0;
}