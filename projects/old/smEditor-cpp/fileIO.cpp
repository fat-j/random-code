#include <iostream>
#include <fstream>
#include <string>



// https://stackoverflow.com/questions/11546177/how-to-read-lines-of-text-from-file-and-put-them-into-an-array
int main()
{
  std::string line[4];
  std::string closeChar[4];
  std::ifstream simfile("in.txt");
  std::ofstream noteData("noteData.txt");
  int a = 0;
  int b = 0;

  if(!simfile) 
  {
    std::cout << "Error opening output file" << std::endl;
    std::cin.get();
    return -1;
  }

  int x = 0;
  while(!simfile.eof())
  {
    getline(simfile,line[a],'\n');
    std::cout << "comma\n";
    ++x;
    std::cout << "x: " << x << "\n";
    //getline(simfile,closeChar[b],';')
    //
  }
  std::cin.get();
}