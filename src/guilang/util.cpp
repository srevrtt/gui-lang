#include <iostream>
#include <string>
#include <fstream>

#include "include/util.hpp"

// Reads the source code of a GuiLang file and returns a string containing it
std::string Utilities::readSource(std::string filepath)
{
  std::ifstream file(filepath); // file
  std::string line, contents; // buffer

  // make sure the file exists
  if (file.is_open())
  {
    // if the check passed, then we can read the source file
    while (std::getline(file, line))
    {
      contents += line + '\n';
    }
  }
  else
  {
    std::cout << "Error: Source file \"" << filepath << "\" does not exist.\n";
    exit(1);
  }

  return contents; // return the source file contents
}
