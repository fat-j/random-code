/* 
1 - Tap note
2 - Hold head
3 - Hold/roll end
4 - Roll head
M - Mine
L - Lift
F - Fake
A - Attack note
K - Auto keysound
N - Minefield/"mine hold" head (unused; inert in the codebase and it's a note type used in iDance and StepManiaX)
H - Hidden note (only works in SM 3.9+ and AMX)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
    std::ifstream simfile("Flower Dance.sm");
    std::string line;

/*
    for(std::string line; getline(simfile, line ); ) {
        int a, b, c, d
        while(line >> a >> b >> c >> d){
            std::cout << line;
        }

    }
*/

    std::ofstream notes("notes.txt");
    while (std::getline(simfile, line)) // set "line" to current[every] line of simfile
    {
        std::string infoChars;
        if(line.find(':') != std::string::npos) // check if the line contains :
        {
            continue;
        }
        if(line.find('/') != std::string::npos)
        {
            continue;
        }

        notes << line; // write to notes.txt
    }

    
    // infinite loop maybe
    // try function or something

    short mLocation;
    short cMeasure;
    std::ofstream noteData("noteData.txt");

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


    return 0;
}








/* parser from eo

ext = "*.sm"

types = {
    'float': '([-+]?[0-9]*\.?[0-9]+?)',
    'str': '(.*?)',
    'var': '([^;]*?)'
}

def str_to_var(var):
    try:
        var = float(var)
    except ValueError:
        pass
    return var

type_converters = {
    'float': lambda s: float(s),
    'var': str_to_var,
}

templates = {
    'variable': "#{str}:{var};",
}

subtemplates = {
    'variable': {
        'BPMS': "{float}={float}\n",
    },
}

*/