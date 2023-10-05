#include <iostream>
//#include <snapTables.hpp>
#include <fstream>
#include <string>
#include <sstream>

int gPerMeasure {}; // maybe make static
int gCurrentSnap {}; // maybe make static
int gSnapType {};

void inputOutput()
{
    std::cout << "Snap Count: ";
    gPerMeasure = std::cin.get();
    std::cout << "Current snap: ";
    gCurrentSnap = std::cin.get();
}

void countSnaps()
{
    // infinite loop maybe
    // try function or something

    std::string line;
    short mLocation;
    short cMeasure;
    std::ofstream notes("notes.txt");
    std::ofstream noteData("noteData.txt");
/*
    while (std::getline(notes, line))
    {
        std::istringstream iss(line);
        int a, b, c, d;
        if (!(iss >> a >> b >> c >> d))
        { 
            break;
        }

        // process pair (a,b)
    }
*/

    if(noteData.is_open()) 
    {
        std::cout << "working";
        while(notes.eof()!=0)
        {
            if(line.find(',') != std::string::npos) // check if the line contains , // inf loop probably here, set line to new value
            {
                noteData << "Snap: "; noteData << mLocation; noteData << "Measure: "; noteData << cMeasure << "\n";
                mLocation = 0;
                ++cMeasure;
                continue;
            }
            ++mLocation;
        }
    notes.close();
    noteData.close();
    }
    // somewhere in this range
	std::cin.get();

}


// https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c
void readFileC()
{
    std::ofstream noteData("noteData.txt");
    FILE* simfile = fopen("notes.txt", "r");
    if (simfile == NULL)
        exit(EXIT_FAILURE);

    char* line = NULL;
    size_t len = 0;
    while((getline(&line, &len, simfile)) != -1) //getline(&buffer,&size,input);
    {   
        noteData << line; // do whatever for every line here, currently just writes each line to noteData
        // probably writing the whole file to line
        // try different var type or overwriting somewhere
    }
    fclose(simfile);
    if (line)
        free(line);       
}



int main()
{
    readFileC();
    std::cin.get();
    return 0;

}
