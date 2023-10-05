    #include <iostream>
    #include <fstream>
    #include <string>
    
    
    
    int main()
    {
        std::string line;
        std::ifstream infile("in.txt");
        std::ofstream outfile("noteData.txt");
    
        int x = 0; //You need to set a default value because when you do ++x, you increment the 
        //value of x, but if x has no value, you can't increment it
    
        while (!infile.eof())
        {
            getline(infile, line); // It retrieves the next line of the file
    
            //Here you can make different tests for the particular values you are looking for
            if (line == ";")
                break;
            if (line == ",")
            {
              x = 0;
                //do what you need when you find a comma
            }
            ++x;
            std::cout << "x: " << x << "\n";
        }
        std::cin.get();
    }